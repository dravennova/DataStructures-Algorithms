#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int checkArraySort(string* A, int arraySize)
{
    bool ascending = true;
    bool descending = true;

    for(int i = 1; i < arraySize; i++)
    {
        if(A[i] > A[i - 1])
        {
            descending = false;
            
        }
        if(A[i] < A[i - 1])
        {
            ascending = false;
        }  
    }

    if(ascending)
    {
        return 1;
    }
    else if(descending)
    {
        return -1;
    }
    else{
        return 0;
    }
    
}

int main() 
{
    ifstream wordsIn ("words_in.txt");
    if(!wordsIn) 
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    int count = 0;
    string readFile;
    while(wordsIn >> readFile)
    {
        count++;
    }
    cout << "Number of words In file is: " << count << endl;
    wordsIn.close();


    wordsIn.open("words_in.txt");
    string* arr = new string[count];
    for(int i = 0; i < count; i++)
    {
        wordsIn>>arr[i];
        cout<<arr[i]<< endl;
    }
    wordsIn.close();


    ofstream wordsOut("words_out.txt");
    if(!wordsOut)
    {
        cout << "Error opening file!" << endl;
        delete[] arr;
        return 1;
    }

    for(int i = 0; i < count; i++)
    {
        wordsOut << arr[i] <<endl;
    }

    int result = checkArraySort(arr, count);

    if(result == 1)
    {
       cout << "The array is sorted in ascending order!"<< endl;
    }
    if(result == -1)
    {
        cout << "The array is sorted in descending order!" << endl;
    }
    if(result == 0)
    {
        cout << "The array is not sorted!" << endl;
    }


    wordsOut.close();
    delete[] arr;

    return 0;
}