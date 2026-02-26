#include <iostream> 

using namespace std;

int main()
{
    int arraySize;
    cout << "Enter the size of the 2D array: ";
    cin >> arraySize;

    if(arraySize < 1)
    {
        cout << "Error: You entered an incorrect value for the array size!" << endl;
        return 1;
    }
    if(arraySize > 10)
    {
        cout << "ERROR: Your array is too large! Enter 1 to 10.";
        return 1;
    }
    
    int col = arraySize;
    int array[arraySize][col];
    for(int i = 0 ; i < arraySize; i++)
    {
        cout << "Enter the values in the array for row " << i + 1 << ", seperated by a space , and press enter: ";
        for(int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }
    int negativeCount = 0;
    for(int i = 0; i < arraySize; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(array[i][j] < 0)
            {
                negativeCount++;
            }
        }
    }
    if(negativeCount >= 1)
    {
        cout << "There are " << negativeCount << " negative values!" << endl;
    }
    else
    {
        cout << "All values are non-negative!" << endl;
    }

}