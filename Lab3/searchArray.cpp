#include <iostream> 

using namespace std;

int main() {
    int arraySize;
    int searchNumber;
    int count = 0;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    if(arraySize <= 0)
    {
        cout << "Error: you entered an incorrefct value for the array size!";
    }

    cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
    int arr[arraySize];
    for(int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to search for in the array: ";
    cin >> searchNumber;
    for(int i = 0; i < arraySize; i++)
    {
        count++;
        if (arr[i] == searchNumber)
        {
            cout << "Found value " << searchNumber << " at index " << i << " which took " << count << " checks." << endl;
            if(i == arraySize - 1)
            {
                cout << "We ran the worst case scenario!";
            }
            else if (i == 0)
            {
                cout << "We ran the best case scenario!";
            }
        }
        
    }
    return 0;
}