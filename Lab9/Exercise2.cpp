#include <iostream>
#include "LinkedList_char.h"
#include "Stack_char.h"

using namespace std;

int main()
{
    Stack firstList;


    cout << "----------Summary of stack----------";
    cout << endl;

    if (firstList.isEmpty())
    {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    firstList.push('A');
    firstList.push('Y');

    cout << "Printed List: "; firstList.print(); cout << endl;

    cout << "Size of List: " << firstList.size() << endl;

    firstList.pop();

    cout << "Printed List: "; firstList.print(); cout << endl;

    if (firstList.isEmpty())
    {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    firstList.push('D');

    cout << "Top of the list: " << firstList.top() << endl;

    firstList.push('T');

    cout << "Printed List: "; firstList.print(); cout << endl;

    firstList.pop();

    cout << "Printed List: "; firstList.print(); cout << endl;
    
}
