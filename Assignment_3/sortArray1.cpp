#include <iostream>

using namespace std;

int main() 
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    if(arraySize <= 0)
    {
        cout << "Error, you entered an incorrect value for the arrray size!" << endl;
        return 1;
    }
    
    cout << "Enter the numbers in the array, seperatd by a space, and press enter: " << endl;

    int* array = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    for(int i = 0; i < arraySize; i++)
    {
        int Max = array[0];
        int iMax = 0;
        for(int j = 1; j < i; j++)
        {
            if(array[j] > array[iMax])
        }
    }

}