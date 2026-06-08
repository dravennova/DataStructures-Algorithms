#ifndef QUEUE_H
#define QUEUE_h
#include "LinkedList_char.h"

class Queue : public LinkedList
{
    public: 
        Queue();
        ~Queue();
        void enqueue(char valueToInsert);
        char dequeue();
        char& front();
};

#endif