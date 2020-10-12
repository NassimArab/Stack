// This is not the main
#include "catch.hpp"
#include <iostream>
using namespace std;
#include "Stack.h"
TEST_CASE("Create a Stack and insert an element", "[stack]")
{
    Stack s;
    s.push(1);
    REQUIRE(s.size() == 1);
    s.pop();
    REQUIRE(s.size() == 0);
    REQUIRE(s.isEmpty() == true);
}


TEST_CASE("Pop an element from an empty stack", "[stack]")
{
    Stack s;
    s.push(1);
    REQUIRE(s.size() == 1);
    s.pop();    

    REQUIRE_NOTHROW(s.pop());
}

TEST_CASE("Create a copy of stack", "[stack]")
{
    Stack s;
    s.push(1);
    Stack c(s);
    REQUIRE(s.size() == c.size());
    REQUIRE(s.top() == c.top());
    REQUIRE(s.maxsize() == c.maxsize());
}
TEST_CASE("Clear a stack", "[stack]")
{
    Stack s;
    s.push(1);
    REQUIRE(s.top() == 1);
    s.clear();
    REQUIRE_THROWS(s.top());

}

TEST_CASE("Destruct a stack", "[stack]")
{
    {
        Stack s;
        s.push(1);
        REQUIRE(s.top() == 1);
    }

}

TEST_CASE("Reduce a stack", "[stack]")
{
    
    Stack s;
    for(int i = 0 ; i < 5 ; i++)
        s.push(i);

    REQUIRE(s.maxsize() != s.size());
    s.reduce();
    REQUIRE(s.maxsize() == s.size());

    for(int i = 0 ; i < 3 ; i++)
        s.pop();

    REQUIRE(s.maxsize() != s.size());
    s.reduce();
    REQUIRE(s.maxsize() == s.size());




}

TEST_CASE("half of a stack", "[stack]")
{
    
    Stack s;
    for(int i = 0 ; i < 10 ; i++)
        {s.push(i);}

    REQUIRE(s.size() == 10);
    half(s);

    REQUIRE(s.size() == 5);


    
}
TEST_CASE("half_copy of a stack", "[stack]")
{
    
    Stack s;
    for(int i = 0 ; i < 10 ; i++)
        {s.push(i);}

    REQUIRE(s.size() == 10);

    Stack c =  half_copy(s);
    
    REQUIRE(c.size() == 5);
    
}

TEST_CASE("= operator", "[stack]")
{
    
    Stack s, s2;
    for(int i = 0 ; i < 10 ; i++)
        {s.push(i);}

    REQUIRE(s.size() == 10);
    s2 = s;
   
   /*for(int i = 0 ; i < 10 ; i++){
        cout<< s2.top() <<"\n";
        s2.pop(); 
   }*/
    REQUIRE(s.top() == s2.top());
    REQUIRE(s2.size() == 10);
    
}

TEST_CASE("== operator", "[stack]")
{
    
    Stack s, s2;
    for(int i = 0 ; i < 10 ; i++)
        {s.push(i);}

    s2 = s;
    bool v = (s2 == s);
    REQUIRE(v == true);
    s.pop();
    v = (s2 == s);
    REQUIRE(v == false);
        
    
}

TEST_CASE("+= operator", "[stack]")
{
    
    Stack s, s2;
    for(int i = 0 ; i < 5 ; i++)
        {s.push(i);
        s2.push(i+5);}

    s+= s2;
    
    REQUIRE(s.size() == 10);
    REQUIRE(s.top() == 5);

  
        
    
}

TEST_CASE("+ two operator", "[stack]")
{
    
    Stack s1, s2;
    for(int i = 0 ; i < 5 ; i++)
        {s1.push(i);
        s2.push(i+5);}

    Stack s;
    s = s1 + s2;
    
    REQUIRE(s.size() == 10);  
    REQUIRE(s.top() == 5);    
    
}


TEST_CASE("<< operator", "[stack]")
{
    
    Stack s1;
    for(int i = 0 ; i < 10 ; i++)
        {s1.push(i);}

   
    
  stringstream ss;

  ss << s1;
    
  int f1[s1.size()] ;
  for(int i = 0 ; i < 10 ; i++)
        {ss >> f1[i];
                
        }

    REQUIRE(f1[9] == 0); 
    REQUIRE(f1[0] == 9); 
    REQUIRE(f1[5] == 4); 
      
}




TEST_CASE("+= operator(int)", "[stack]")
{
    
    Stack s;
    s+=(10);
    REQUIRE(s.top()==10);
    for(int i = 0 ; i < 5 ; i++)
        {s.push(i);}
    REQUIRE_THROWS(s+=5);
    REQUIRE(s.top()==4);
    REQUIRE_NOTHROW(s+=3);
    REQUIRE(s.top()==3);


  
        
    
}