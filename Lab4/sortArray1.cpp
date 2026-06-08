#include<iostream>

using namespace std;


void selectionSortAsc(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    cout << "This is the sorted array in ascending order: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the minimum for the traverse of the array." << endl;
    cout << "It took " << count << " swaps to sort the array.. " << endl;
}


void selectionSortDesc(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n - 1; i++)  // iterate from 0 to n-1
    {
        int maxIndex = i;  // start with current index
        for(int j = i + 1; j < n; j++)  // find the max element in the remaining array
        {
            if(arr[j] > arr[maxIndex])  
            {
                maxIndex = j;
            }
        }
        if(maxIndex != i)  
        {
            swap(arr[maxIndex], arr[i]);
            count++;
        }
    }
    cout << "This is the sorted array in descending order: ";
    for(int i = 0; i < n; i++)  
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array." << endl;
    cout << "It took " << count << " swaps to sort the array." << endl;
}

int main() 
{
    int arraySize;
    int sortChoice;
    
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    if(arraySize <= 0)
    {
        cout << "Error: You entered an incorrect value for the array size!";
        return 1;
    }

    int arr[arraySize];
    cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
    for(int i = 0; i < arraySize; i++ )
    {
        cin >> arr[i];
    }

    cout << "Sort in ascending (0) or descending (1) order? ";
    cin >> sortChoice;

    if(sortChoice == 0)
    {
        selectionSortAsc(arr, arraySize);
    }
    if(sortChoice == 1)
    {
        selectionSortDesc(arr, arraySize);
    }
}