#ifndef QUEUE_H
#define QUEUE_h
#include "LinkedList.h"

class Queue : public LinkedList
{
    public: 
        Queue();
        ~Queue();
        void enqueue(int valueToInsert);
        int dequeue();
        int& front();
};

#endif