#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() { //init constructor
	first = nullptr; 
    last = nullptr;    
}

LinkedList::~LinkedList() { //desconstructor
    clear();
}

void LinkedList::insertAtFront(int valueToInsert)
{
    Node* current = first;
    Node* newNode = new Node;
    newNode->val = valueToInsert;
    newNode->next = current;

    if(first == nullptr) // if list is empty
    {
        first = newNode;
        last = newNode;
        return;
    }
    else{
        first = newNode;
    }

    //set current node to be the first element
    //create new node
    //new nodes value is the valueToInsert
    //the next node to the new node is the current node 
    // then if list is empty set new node to both first and last
    //else first should be the new node    
}

bool LinkedList::removeFromFront()
{
    if(isEmpty())
    {
        return false;
    }
    
    Node* current = first;  // Store the node we want to delete
    
    if(first == last)  // If there's only one node
    {
        first = nullptr;
        last = nullptr;
    }
    else
    {
        first = current->next;
    }
    
    delete current;  
    return true;
    //if empty return false
    //set current node to be the first element
    //if first element is equal to last element set both to null
    //if not null then set first to be next node
    //delete current and return true
}

void LinkedList::insertAtBack(int valueToInsert) 
{
    Node* newNode = new Node;
    newNode->val = valueToInsert;
    newNode->next = nullptr;
    //create new node
    //set value of new node to be value we want to insert
    //then since its the last node the next node will be null indicating
    //the last of the list

    if(first == nullptr) // if list is empty
    {
        first = newNode;
        last = newNode;
        return;
    }
    //if empty and first is nothing then set first and last to be the new node
    //return nothing 

    Node* current = first;
    while(current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode; //(Links the last node to the newly created node)
    last = newNode;//(Updates the last pointer to reflect the new last node in the list)
    //if list is not empty create current node that is the first element of list
    //if the next node from current is not null
    //then establish current to be the next node
    //if next node from current is null set that next node from current to be the
    //new node
    
}
    

bool LinkedList::removeFromBack()
{
    if(isEmpty()) // is the list empty
    {
        return false; // if it is return false
    }
    if(first == last) // if value has just one element left
    {
        delete first;
        first = last = nullptr;
        return true;
        //delete the element
        //set first and last variables to null as the list is empty
        //then showing true because list is empty 
    }
    Node* current = first;
    while(current->next != last)
    {
        current = current->next;
    }
    delete last;
    last = current;
    last->next = nullptr;
    return true;
    //set current node to be pointing to first element
    //go through list so that the next node from current does not equal last
    //set curent to be the next node from current
    //if it does reach last then delete last
    //set current to the second to last node
    //set the next pointer node to be null as its the end of the list
    //return true;
}

void LinkedList::print()
{
    Node* current = first;
    while(current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
}

bool LinkedList::isEmpty() 
{
    return first == nullptr;
    return true;
} 

int LinkedList::size()
{
    int count = 0;
    Node* current = first; 
    if(isEmpty())
    {
        return 0; //list has no elements 
    }
    while(current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count; // return count after switching current to the next node until null
}

void LinkedList::clear()
{
    Node* current = first; // set first to be a pointer called current
    while(current != nullptr)
    {
        Node* next = current->next; //next is set to address of following node from current
        delete current; // delete current
        current = next; //set current to next so loop keeps going
    }
    first = nullptr; // ensure these are null as there are no elements left
    last = nullptr;
}


