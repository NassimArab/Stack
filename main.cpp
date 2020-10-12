#include "Stack.h"

#include <iostream>

using namespace std;
 void affi(Stack s);

void Hanoi (int n , Stack &dep ,Stack &interm, Stack &arri){

   // while(!verif(arri)){
        if(n >0){
            Hanoi (n-1 , dep , arri , interm );
            arri+=(dep.top());
            dep.pop();
            Hanoi (n-1 , interm , dep , arri );
            
        }

                }


bool verif(Stack s){
    int a;
    for(int i = 0; i < s.size() ; i++){
        a = s.top();
        s.pop();
        if(a > s.top())
            return false;
    }
    return true;
 }
 void affi(Stack s){
     cout<< " ____START_STACK____ \n";
     cout<< "   |                   | \n";
    int m = s.size();
    for(int i = 0; i < m ; i++){
        cout<<"             " <<s.top() <<endl;
        s.pop();
       
    }
    cout<< "   |                   | \n";
    cout<< "    _____END_STACK_____ \n";
     }
int main()
{
    Stack A;
    Stack B;
    Stack C;
    int m;
    cout<< "Number of discs (0 < N < 11) : " ;
    cin>>m;
    while((m<1)||(m>10)){
        system("clear");
        cout<<"Number must be : 0 < N < 11 \n";
        cout<< "Number of discs (0 < N < 11) : " ;
    cin>>m;
    }
    for(int i = m; i > 0 ; i--){
        A.push(i);
       
    }
    cout<<"\n          Befor : \n\nA   " ;
    affi(A);
    cout<<"B   " ;
    affi(B);
    cout<<"C   " ;
    affi(C);
    Hanoi(A.size() ,A,B,C);
    cout<<"\n          After  : \n\nA   " ;
    affi(A);
    cout<<"B   " ;
    affi(B);
    cout<<"C   " ;
    affi(C);
   
}

