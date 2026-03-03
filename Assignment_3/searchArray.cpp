#include <iostream>

using namespace std;

int main()
{
    int arraySize;

    cout << "Enter the size of the array: ";
    cin >> arraySize;

    if(arraySize <= 0)
    {
        cout << "Error: You entered an incorrect value for the array size!" << endl;
        return 1;
    }


    cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
    int* array = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
    
    int v;
    cout << "Enter a number to search for in the array: ";
    cin >> v;

    for(int i = 0; i < arraySize; i++)
    {
        if(array[i] == v)
        {
            cout << "We found value " << v << " at index " << array[i] << " which took " << i << " checks" << endl;
        }
        if(i == 1)
        {
            cout << "We ran the best case scenario!" << endl;
        }
        if(array[i] < i)
        {
            cout << "We ran into the worst case scenario!" << endl;
        }
    }
}