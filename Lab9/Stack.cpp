#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

Stack::Stack()
{
    
}

Stack::~Stack()
{

}

void Stack::push(int valueToInsert) 
{
    LinkedList::insertAtFront(valueToInsert);  
}

int Stack::pop()
{
    int number = first->val;
    LinkedList::removeFromFront();
    return number;
}

int& Stack::top()
{
    return first->val;  
}


