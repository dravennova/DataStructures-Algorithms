#include<iostream>
#include "Queue_char.h"
#include "LinkedList_char.h"

using namespace std;

Queue::Queue()
{

}

Queue::~Queue()
{

}

void Queue::enqueue(char valueToInsert)
{
    LinkedList::insertAtBack(valueToInsert);
}

char Queue::dequeue()
{
    if(LinkedList::isEmpty())
    {
        throw 1;
    }

    char value = first->val;
    LinkedList::removeFromFront();
    return value;
}

char& Queue::front()
{
    if (LinkedList::isEmpty()) 
    {
        throw 1; 
    }
    return first->val;
}