#include <iostream> 

using namespace std;

int main()
{
    int arraySize;
    cout << "Enter the size of the 2D array: ";
    cin >> arraySize;

    if(arraySize < 1 || arraySize > 10)
    {
        cout << "ERROR: your array is too large! Enter 1 to 10." << endl;
    }
    vector<int> array[arraySize];

    for(int i = 0 ; i < arraySize; i++)
    {
        for(int j = 0; j < arraySize; j++)
        {
            cout << "Enter the values in the array for row " << i + 1 << ", seperated by a space , and press enter: ";
            cin >> array[i][j];
        }
    }
    
}