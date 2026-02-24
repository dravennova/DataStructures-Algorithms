#include <iostream>

using namespace std;

int main()
{
    int userInput;

    cout << "Enter the number of line sfor the punishment: ";
    cin >> userInput;

    if(userInput <= 0)
    {
        cout << "You entered an incorrect value for the number of lines!" << endl;
        return 1;
    }
    else
    {
        for(int i = 0; i < userInput; i++)
        {
            cout << "I will always use object oriented programming." << endl;
        }
    }
    return 0;
}