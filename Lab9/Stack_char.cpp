#include <iostream>
#include "Stack_char.h"
#include "LinkedList_char.h"

Stack::Stack()
{
    
}

Stack::~Stack()
{

}

void Stack::push(char valueToInsert) 
{
    LinkedList::insertAtFront(valueToInsert);  
}

char Stack::pop()
{
    char value = first->val;
    LinkedList::removeFromFront();
    return value;
}

char& Stack::top()
{
    return first->val; 
}

