#include<iostream>

using namespace std;

int main() 
{
    int userInput;
    cout << "Enter the size of the array: ";
    cin >> userInput;
    if (userInput <= 0) 
    {
        cout << "ERROR: You entered an incorrect value for the array size!";
        return 1;
    }
    else
    {
        int arr[userInput];
        cout << "Enter the numbers in the array, separated by a space, and press enter: ";
        for (int i = 0; i < userInput; i++) 
        { 
            cin >> arr[i];
        }
        
        bool isIncreasing = true;
        for(int i = 1; i < userInput; i++)
        {
            if(arr[i] <= arr[i -1])
            {
                isIncreasing = false;
                break;
            }
        }

        if(isIncreasing)
        {
            cout << "This IS an increasing array!" << endl;
        }
        else{
            cout << "This is NOT an increasing array!" << endl;
        }
    }
}