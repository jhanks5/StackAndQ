#include <iostream>
using namespace std;

#include "Stack.h"

//Note, scope operators are needed to give functions access to private data variables
Stack::Stack()
: myTop(-1)
{}

Stack::~Stack()
{}

bool Stack::empty()
{
    return (myTop == -1); //true if there's nothing in the stack
}

int Stack::size() //double check this
{
    for (int i = myTop; i <= STACK_CAPACITY; i++)
        {
            return i = i + 1;
        }
}

void Stack::push(const StackElement & value)
{
    if (myTop < STACK_CAPACITY - 1) //if there's room
    {
        ++myTop; //increment myTop (note prefix usage of incrementation)
        myArray[myTop] = value; //now set myTop = input
    }
    else //for when condition of if statement is not met (stack is full)
    {
        cerr << "Stack is full, cannot add new value";
    }
}

void Stack::display(ostream & out)
{
    for (int i = myTop; i >= 0; i--) //as long as i >= starting from the top, decrement after displaying and repeat
        out << myArray[i] << endl; //note that the use of endl displays
                                   //the data vertically as a stack is described
}

StackElement Stack::top()
{
    if (!empty()) { //if stack isn't empty
        return (myArray[myTop]); //retrieves top element of stack
    }
    else {
        cerr << "Stack is empty.";
    }
}

void Stack::pop()
{   //if not empty, evaluate value of myTop and then reduce it by one unit
    if (!empty())
        myTop--;
    else
        cerr << "Stack is empty.";
        //exit(1);
}
