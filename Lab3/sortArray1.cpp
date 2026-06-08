#include <iostream> 
using namespace std;

void selectionSort(int arr[], int n)
{
    int count = 0;
    for(int i = n - 1; i > 0; i--)
    {
        int maxIndex = 0;
        for(int j = 1; j <= i; j++)
        {
            if(arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        if(maxIndex != i)
        {
            int temp = arr[maxIndex];
            arr[maxIndex] = arr[i];
            arr[i] = temp;
        }
    }
    cout << "This is the sorted array in descending order: ";
    for(int i = n-1 ; i >=0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array." << endl;
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