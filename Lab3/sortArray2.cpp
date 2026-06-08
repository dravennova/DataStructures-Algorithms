#include <iostream> 
using namespace std;

void selectionSort(int arr[], int n)
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

int main() 
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    if(arraySize <= 0)
    {
        cout << "Error: You entered an incorrect value for the array size!";
        return 1;
    }
    cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
    int arr[arraySize];
    for(int i = 0; i < arraySize; i++ )
    {
        cin >> arr[i];
    }

    selectionSort(arr, arraySize);
}