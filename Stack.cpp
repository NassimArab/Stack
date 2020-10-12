#include "Stack.h"
#include <cstring>


/**
   Complete the member functions below
 */

Stack::Stack()
{
    s = new int[sizeT];
    sommet = 0;
}

Stack::Stack(const Stack &s1)
{
    s = new int[sizeT];
    sommet = s1.sommet;
    //memcpy(s,s1.s,sizeof(s1.s));
     for (int i = sommet-1 ; i >= 0; i--){
        s[i] = s1.s[i];
        
     }
}

Stack::~Stack()
{
    delete [] s;
}
    
bool Stack::isEmpty() const
{
     return sommet == 0;
}

int Stack::top() const 
{
    if(sommet == 0) 
        throw EmptyExc();
    else return s[sommet - 1];
}

void Stack::pop()
{
    if (sommet == 0 )
        cout << "Pile Vide" << endl;
    else
    {
        s[sommet - 1] = -1;
        sommet --;
    }
}

void Stack::push(int elem)
{
    if(sommet == sizeT){
        
        int tab[sizeT];
        memcpy(tab,s,sizeT);
        sizeT += 50;
        delete [] s;
        s = new int[sizeT];
        memcpy(s,tab,sizeof(tab));
        s[sommet] = elem;
        sommet ++;



    }
        
    else
    {
        s[sommet] = elem;
        sommet ++;
    }
}

void Stack::clear()
{
    delete [] s;
    sizeT = N;
    sommet = 0;
    s = new int[sizeT];
}

int Stack::size() const
{
    
    return sommet;
}

int Stack::maxsize() const
{
 
    return sizeT;
}

 void Stack::reduce(){
    sizeT = sommet;
    int tab[sizeT];
    memcpy(tab,s,sizeT);
    delete [] s;
    s = new int[sizeT];
    memcpy(s,tab,sizeT);
 }

 void half(Stack &s){
     int m = s.size() / 2;
    for(int i = 0 ; i < m ; i++ ){
        s.pop();
    }
}

 Stack half_copy(Stack s){

    Stack c(s);
    half(c);
    return c;
 }

 Stack & Stack::operator=(const Stack &other){
    Stack c(other);
    sommet = c.sommet;
    sizeT = c.sizeT;
    for (int i = c.size()-1 ; i >= 0; i--){
        s[i] = c.s[i];
        
            }
    return *this;
 

 }

 bool Stack::operator==(const Stack &other) const{
     Stack c(other);
    if ((sommet != c.sommet) || ( sizeT != c.sizeT))
        return false;

    

     for (int i = c.size()-1 ; i >= 0; i--){
         if(s[i] == c.top()){
             c.pop();
         }else{
            return false;
         }
     }

     return true;

 }

 Stack & Stack::operator+=(const Stack &other){
     Stack c(other);
     sizeT += c.maxsize();
     for (int i = c.size()-1 ; i >= 0; i--){
         push(c.top());
         c.pop();
     }
     return *this;
 }

 Stack operator+(const Stack &s1, const Stack &s2){
     Stack c;
     c = s1;
     c += s2;
     return c;
 }

 std::ostream& operator<<(std::ostream &os, const Stack &s){

     Stack c(s);
     for(int i = 0 ; i < s.size()   ; i ++){
      os <<  c.top() << " ";
        c.pop();
     }
     return os;
     
 }

 Stack & Stack::operator+=(int elem){
     if(sommet == 0){
         push(elem);
     }else if(top() >= elem){
         push(elem);
     }else{
         throw IncorrectPush();
     }
     return *this;

     

 }

 
