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
    
    cout << "Enter the numbers in the array, seperatd by a space, and press enter: ";
    int* array = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    for(int i = 1; i < arraySize; i++)
    {
        int key = array[i];
        int j = i - 1;

        while(j >= 0 && key < array[j])
        {
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = key;
    }

    cout << "This is the sorted array in an ascending order: ";

    for(int k = 0; k < arraySize; k++)
    {
        cout << array[k] << " ";
    }

    cout << "The algorithm selected the maximum for the traverse of the array"; 
    

}