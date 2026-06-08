#include<iostream> 

using namespace std;

int main() {
    string userInput;

    cout << "Enter the string to reverse: ";
    cin >> userInput;
    
    for(int i = userInput.length() - 1; i >= 0; i--) {
        cout << userInput[i]; 
    }

}