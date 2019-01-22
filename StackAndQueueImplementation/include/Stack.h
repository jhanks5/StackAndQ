//Header file to define Stack function prototypes
#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

const int STACK_CAPACITY = 128;
typedef int StackElement;

class Stack
{
    public: //function prototype declarations
        Stack(); //constructs Stack object
        virtual ~Stack(); //destructor for Stack object
        bool empty(); //checks to see if the stack is empty, returns 0 (false) or 1 (true)
        void push(const StackElement & value); //inserts an element into the stack
        void display(ostream & out); //displays the stack elements, note that namespace std is needed
        StackElement top(); //returns value at top of stack //typedef int
        void pop(); //remove element at top of stack (FIFO)
        int size(); //evaluates the present size of the stack and returns it as a whole int value

    private: //data members
        StackElement myArray[STACK_CAPACITY];
        int myTop;
};

#endif // STACK_H
