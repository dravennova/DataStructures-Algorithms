#include <iostream>

using namespace std;

int main()
{
    int userInput;
    int typo;

    cout << "Enter the number of lines for the punishment: ";
    cin >> userInput;

    if(userInput <= 0 )
    {
        cout << "You entered an incorrect number of lines!";
        return 1;
    }
    else
    {
        cout << "Enter the line for which we want to make a typo: ";
        cin >> typo;

        if(typo <= 0)
        {
            cout << "You entered an incorrect value for the line typo!" << endl;
            return 1;
        }
        else
        {
            for(int i = 0; i < userInput; i++)
            {
                if(typo == i+1)
                {
                    cout << "I will always use object oriented programing." << endl;
                }
                else
                {
                    cout << "I will always use object oriented programming." << endl;
                }
            }
        }
    }
}