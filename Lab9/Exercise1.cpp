#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

using namespace std;

int main()
{
    Stack firstList;
    Stack secondList;


    cout << "----------Summary of stack----------";

    if (firstList.isEmpty())
    {
        cout << " The first list is empty" << endl;
    }
    else {
        cout << "The first list is not Empty" << endl;
    }

    firstList.push(1);
    firstList.push(2);
    firstList.push(3);
    firstList.push(4);
    firstList.push(5);
    firstList.push(6); 
    firstList.push(7);
    firstList.push(8);
    firstList.push(9);
    firstList.push(10);

    if (firstList.isEmpty())
    {
        cout << " The first list is empty" << endl;
    }
    else {
        cout << "The first list is not Empty" << endl;
    }

    cout << "Here is the full list: ["; firstList.print(); cout << "]" << endl;

    cout << "Here is the top:  [ " << firstList.top(); cout << "]" << endl;

    cout << "Here is the size of the list: [ " << firstList.size(); cout << "]" << endl;

    firstList.pop();
    firstList.pop();

    if (firstList.isEmpty())
    {
        cout << " The first list is empty" << endl;
    }
    else {
        cout << "The first list is not Empty" << endl;
    }

    cout << "Here is the full list: ["; firstList.print(); cout << "]" << endl;


    cout << "Here is the top [ " << firstList.top(); cout << "]" << endl;

    cout << "Here is the size of the list: [ " << firstList.size(); cout << "]" << endl;

 
}
