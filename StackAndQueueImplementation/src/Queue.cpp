#include <iostream>
using namespace std;

#include "Queue.h"

Queue::Queue()
: myFront(0), myBack(0)
{}

Queue::~Queue()
{}

bool Queue::empty() const
{
    return (myFront == myBack); //returns boolean value of 0 or 1
}

void Queue::push(const QueueElement & value)
{
    int newBack = (myBack + 1) % QUEUE_CAPACITY;
    if (newBack != myFront) //if the queue is not full
    {
        myArray[myBack] = value; //new back of queue is input value
        myBack = newBack;
    }
    else
    {
        cerr << "Queue is full, cannot add new value." << endl;
    }
}

void Queue::display(ostream & out)
{
    //for index = myFront, while i is not equal to myBack,
    //output then set index equal to incrementation mod queue n
    for (int i = myFront; i != myBack; i = (i+1) % QUEUE_CAPACITY)
        out << myArray[i] << " ";
    cout << endl;
}

QueueElement Queue::front()
{
    if (!empty())
        return (myArray[myFront]);
    else
    {
        cout << "Queue is empty.";
    }
}

void Queue::pop()
{   //if not empty, myFront is now equal to whole number of myFront + 1
    if (!empty())
        myFront = (myFront + 1) % QUEUE_CAPACITY;
    else
        cout << "Queue is already empty.";
}
