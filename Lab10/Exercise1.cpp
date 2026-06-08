#include <iostream>
#include "LinkedList.h"
#include "Queue.h"

using namespace std;

int main()
{
    Queue firstQueue;

    cout << "Here is the printed Queue: "; firstQueue.print(); cout << endl;

    if(firstQueue.isEmpty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }

    firstQueue.enqueue(1);
    firstQueue.enqueue(2);
    firstQueue.enqueue(3);
    firstQueue.enqueue(4);
    firstQueue.enqueue(5);
    firstQueue.enqueue(6);
    firstQueue.enqueue(7);
    firstQueue.enqueue(8);
    firstQueue.enqueue(9);
    firstQueue.enqueue(10);

    cout << "Here is the printed Queue: "; firstQueue.print(); cout << endl;

    try
    {
        cout << "Front value: " << firstQueue.front() << endl;
    }
    catch(int e)
    {
        cout << "Call to front() generated an exception, because the queue is empty" <<endl;
    }

    cout << "Size of list: " << firstQueue.size() << endl;

    try
    {
        firstQueue.dequeue();
        firstQueue.dequeue();
    }
    catch(int e)
    {
        cout << "Call to dequeue() generated an exception, because the queue is empty" << endl;
    }


    cout << "Here is the printed Queue: "; firstQueue.print(); cout << endl;

    try
    {
        cout << "Front value: " << firstQueue.front() << endl;
    }
    catch(int e)
    {
        cout << "Call to front() generated an exception, because the queue is empty" <<endl;
    }

    cout << "Size of list: " << firstQueue.size() << endl;

    if(firstQueue.isEmpty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }

    try
    {
        firstQueue.dequeue();
        firstQueue.dequeue();
        firstQueue.dequeue();
        firstQueue.dequeue();
        firstQueue.dequeue();
        firstQueue.dequeue();
        firstQueue.dequeue();
        firstQueue.dequeue();
    }
    catch(int e)
    {
        cout << "Call to dequeue() generated an exception, because the queue is empty" << endl;
    }

    if(firstQueue.isEmpty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }

    cout << "Here is the printed Queue: "; firstQueue.print(); cout << endl;

    cout << "Size of list: " << firstQueue.size() << endl;

    try
    {
        cout << "Front value: " << firstQueue.front() << endl;
    }
    catch(int e)
    {
        cout << "Call to front() generated an exception, because the queue is empty" <<endl;
    }

    try
    {
        firstQueue.dequeue();
        firstQueue.dequeue();
    }
    catch(int e)
    {
        cout << "Call to dequeue() generated an exception, because the queue is empty" << endl;
    }
}

