#include <iostream>
using namespace std;
#ifndef __STACK_H__
#define __STACK_H__
#define N 500
class EmptyExc {};
class IncorrectPush {};
class Stack {
    int *s;
    int sommet;
    int sizeT = N;
 public:
    Stack();               // default constructor, empty stack
    Stack(const Stack &s); // copy constructor
    ~Stack();              // destructor
    
    bool isEmpty() const;  // returns true if empty
    int top() const;       // returns the element at the top
    void pop();            // removes element from the top
    void push(int elem);    // puts an element on top
    void clear();          // removes all elements
    int size() const;      // number of elements currently in the stack
    int maxsize() const;   // size of the internal representation
    void reduce() ;   // réduit la taille du tableau pour être égal au nombre d'éléments contenus dans la pile
    Stack &operator=(const Stack &other);
    bool operator==(const Stack &other) const;
    Stack & operator+=(const Stack &other);
    Stack &operator+=(int elem);
    

};
 void half(Stack &s);
 Stack half_copy(Stack s);
 Stack operator+(const Stack &s1, const Stack &s2);
 std::ostream& operator<<(std::ostream &os, const Stack &s);

#endif
