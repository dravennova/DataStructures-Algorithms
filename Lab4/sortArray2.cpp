#include<iostream>

using namespace std;


void insertSortAsc(int arr[], int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        int saved = arr[i];
        int j = i;
        while(j > 0 && arr[j - 1] > saved)
        {
            arr[j] = arr[j - 1];
            j = j - 1;
            count++;                
        }
        arr[j] = saved;
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


void insertSortDesc(int arr[], int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        int saved = arr[i];
        int j = i;
        while(j > 0 && arr[j - 1] > saved)
        {
            arr[j] = arr[j - 1];
            j = j - 1;
            count++;                
        }
        arr[j] = saved;
    }
    cout << "This is the sorted array in descending order: ";
    for(int i = n-1 ; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array." << endl;
    cout << "It took " << count << " swaps to sort the array.. " << endl;
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
        insertSortAsc(arr, arraySize);
    }
    if(sortChoice == 1)
    {
        insertSortDesc(arr, arraySize);
    }
}