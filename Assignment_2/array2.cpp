#include <iostream>

using namespace std;

int main()
{   
    string userInput;
    string userOutput;

    cout << "Enter the string to reverse: ";
    cin >> userInput;

    for(int i = userInput.size() - 1 ; i >= 0; i--)
    {
        userOutput += userInput[i];
    }
    cout << "The reverse of the string is: " << userOutput << endl;
}