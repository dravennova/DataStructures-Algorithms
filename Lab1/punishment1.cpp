#include <iostream> 

using namespace std;

int main() {
    int num;
    cout << "Enter the number of lines for the punishment: ";

    cin >> num;

    if (num < 0) {
        cout << "You entered an incorrect value for the number of lines!" << endl;
    }
    else {
        for (int i = 0; i < num; i++) {
            cout << "I will always use object oriented programming." << endl;
        }
    }
}