//Header file to define Queue function prototypes
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

const int QUEUE_CAPACITY = 128;
typedef int QueueElement;

class Queue
{
    public:
        Queue();
        virtual ~Queue();
        bool empty() const;
        void push(const QueueElement & value);
        void display(ostream & out);
        QueueElement front();
        void pop();

    private:
        QueueElement myArray[QUEUE_CAPACITY];
        int myFront,
        myBack;

};

#endif // QUEUE_H
