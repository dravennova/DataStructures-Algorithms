#ifndef STACK_H
#define STACK_H
#include "LinkedList_char.h"

class Stack : public LinkedList 
{
    public:
        Stack();
        ~Stack();
        void push(char valueToInsert);
        char pop();
        char& top();
};
#endif
