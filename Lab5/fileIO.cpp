#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() 
{
    int count = 0;
    ifstream wordsIn ("words_in.txt");
    string readFile;

    while(!wordsIn.eof())
    {
        wordsIn >>readFile;
        count++;
    }
    cout << "Number of words In file is: " << count << endl;
    wordsIn.close();

    vector<string> arr(count);

    ifstream file("words_in.txt");
    for(int i = 0; i < count; i++)
    {
        file>>arr[i];
        cout<<arr[i] << endl;
    }
    wordsIn.close();
    ofstream wordsOut("words_out.txt");
    for(int i = 0; i < count; i++)
    {
        wordsOut << arr[i] <<endl;
    }
}