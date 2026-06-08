#include<iostream>

using namespace std;

void combineStr(string str, int num)
{
    string result = "";
    for(int i = 0; i < num; i++)
    {
        result += str;
    }
    cout << "The resulting string is: " << result << endl;
}

int main() {
    string userString;
    int numTimes;

    cout << "Enter a string: ";
    cin >> userString;


    cout << "Enter a number of times: ";
    cin >> numTimes;

    combineStr(userString, numTimes);
}