#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
    cout << "Showcasing Stack and Queue Functions" << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
    cout << "Demonstrating Stack functions: " << endl;

    Stack demoStack; //create a stack that holds integer values

    cout << "Verifying that stack is currently empty: " << boolalpha << demoStack.empty() << endl;

    cout << "Now populating stack... " << endl;
    demoStack.push(5); //push adds an element to the top of the stack
    demoStack.push(6);
    demoStack.push(7);
    demoStack.push(8); //stack from top to bottom is now 8, 7, 6, 5

    cout << "The top most element of the stack is currently: " << demoStack.top() << endl;

    cout << "The stack now contains " << demoStack.size() << " integers." << endl;

    cout << "Displaying stack..." << endl;
    demoStack.display(cout);

    cout << "Removing the top most element of the stack (LIFO)..." << endl;
    demoStack.pop(); //Note that pop is not run as part of the cout statement because there is no return value

    cout << "The top most element of the stack is now: " << demoStack.top() << endl;

    cout << "The stack now contains " << demoStack.size() << " integers." << endl;

    cout << "Displaying stack..." << endl;
    demoStack.display(cout);

    cout << endl;
    cout << "Demonstrating Queue functions: " << endl;

    Queue demoQueue; //create a queue that holds integer values, syntax is same as stacks

    cout << "Verifying that the queue is currently empty: " << boolalpha << demoQueue.empty() << endl;

    cout << "Now populating queue..." << endl;
    demoQueue.push(5);
    demoQueue.push(6);
    demoQueue.push(7);
    demoQueue.push(8);

    cout << "The front of the queue is currently: " << demoQueue.front() << endl;

    cout << "Displaying queue..." << endl;
    demoQueue.display(cout);

    cout << "Removing the front element of the queue (FIFO)... " << endl;
    demoQueue.pop();

    cout << "The new front of the queue is: " << demoQueue.front() << endl;

    cout << "Displaying queue..." << endl;
    demoQueue.display(cout);
}
