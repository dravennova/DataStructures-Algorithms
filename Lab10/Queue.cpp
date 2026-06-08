#include<iostream>
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

Queue::Queue()
{

}

Queue::~Queue()
{

}

void Queue::enqueue(int valueToInsert)
{
    LinkedList::insertAtBack(valueToInsert);
}

int Queue::dequeue()
{
    if(LinkedList::isEmpty())
    {
        throw 1;
    }

    int number = first->val;
    LinkedList::removeFromFront();
    return number;
}

int& Queue::front()
{
    if (LinkedList::isEmpty()) 
    {
        throw 2; 
    }
    return first->val;
}

