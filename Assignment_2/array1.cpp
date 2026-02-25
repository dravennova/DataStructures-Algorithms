#include <iostream>

using namespace std;

bool increasingArray()
{
    int arraySize;

    cout << "Enter the size of the array: ";
    cin >> arraySize;

    if(arraySize <= 0)
    {
       cout << "ERROR: you entered an incorrect value for the array size!" << endl;
    }

    int array[arraySize];

    cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
    for(int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
    
    for(int i = 1; i < arraySize; i++)
    {
        if(array[i] <= array[i-1])
        {
            cout << "This is NOT an increasing array!" << endl;
            return false;
        }
    }
    cout << "This IS an increasing array!" << endl;
    return true;
}

int main() 
{
    increasingArray();
    return 0;
}