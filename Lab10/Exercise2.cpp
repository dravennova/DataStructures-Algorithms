#include <iostream>
#include "LinkedList_char.h"
#include "Queue_char.h"

using namespace std;

int main()
{
    Queue firstQueue;

    try
    {
        firstQueue.dequeue();
        cout << "After Dequeue: ";
        firstQueue.print();
        cout << endl;
    }
    catch(int e)
    {
        cout << "Call to dequeue() generated an excecption, because the queue is empty. " << endl;
    }

    firstQueue.enqueue('D');
    firstQueue.enqueue('A');

    cout << "Queue contents: ";
    firstQueue.print();
    cout << endl;

    try
    {
        firstQueue.dequeue();
        cout << "After Dequeue: ";
        firstQueue.print();
        cout << endl;
    }
    catch(int e)
    {
        cout << "Call to dequeue() generated an exception, because the queue is empty. " << endl;
    }

    cout << "Size of List: " << firstQueue.size() << endl;

    firstQueue.enqueue('D');

    cout << "Queue contents: ";
    firstQueue.print();
    cout << endl;

    if(firstQueue.isEmpty())
    {
        cout << "List is empty " << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }

    try
    {
        cout << "Front value: " << firstQueue.front() << endl;
    }
    catch(int e)
    {
        cout << "Call to front() generated an exception, because the queue is empty. " << endl;
    }

    firstQueue.enqueue('T');

    cout << "Queue contents: ";
    firstQueue.print();
    cout << endl;

    try
    {
        cout << "Front value: " << firstQueue.front() << endl;
    }
    catch(int e)
    {
        cout << "Call to front() generated an exception, because the queue is empty. " << endl;
    }

    cout << "Final queue contents: ";
    firstQueue.print();
    cout << endl;

    return 0;
}


