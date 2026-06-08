#include<iostream> 

using namespace std;

int main() {
    int userArray;
    cout << "Enter the size of a 2D array: ";
    cin >> userArray;

    if(userArray > 10)
    {
        cout << "Error: Your array is too large! Enter 1 to 10.";
    }
    else if (userArray <= 0)
    {
        cout << "Error: You entered an incorrect value for the array size.";
    }
    else
    {
        int col = userArray;
        int arr[userArray][col];
        for(int i = 0; i < userArray; i++)
        {
            cout << "Enter the values in the array for row " << i + 1<< ", seperated by a space, and press enter: ";
            for(int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }
        int negCount = 0;
        for(int i = 0; i < userArray; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(arr[i][j] < 0)
                {
                    negCount++;
                }
            }
        }

        if(negCount > 0)
        {
            cout << "There are " << negCount << " negative values!";
        }
        else
        {
            cout << "All values are non-negative!";
        }
    }
}
