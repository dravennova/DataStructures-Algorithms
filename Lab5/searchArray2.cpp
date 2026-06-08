#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void selectionSortAsc(string arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            string temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    cout << "This is the sorted array in ascending order: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the minimum for the traverse of the array." << endl;
    cout << "It took " << count << " swaps to sort the array.. " << endl;
}


void selectionSortDesc(string arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n - 1; i++)  // iterate from 0 to n-1
    {
        int maxIndex = i;  // start with current index
        for(int j = i + 1; j < n; j++)  // find the max element in the remaining array
        {
            if(arr[j] > arr[maxIndex])  
            {
                maxIndex = j;
            }
        }
        if(maxIndex != i)  
        {
            swap(arr[maxIndex], arr[i]);
            count++;
        }
    }
    cout << "This is the sorted array in descending order: ";
    for(int i = 0; i < n; i++)  
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array." << endl;
    cout << "It took " << count << " swaps to sort the array." << endl;
}


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

int binarySearchR(string* A, int arraySize, string key) //needs to be int not void for return value
{
    static int low = 0;
    static int high = arraySize - 1;
    static bool firstCall = true; // add a flag for first function call
    static bool isAscending;
    static bool isDescending;

    if (firstCall) 
    { // reset on the first function call
        low = 0;
        high = arraySize - 1;
        int sortOrder = checkArraySort(A, arraySize);
        isAscending = (sortOrder == 1);
        isDescending = (sortOrder == -1);
        firstCall = false;  // after first call, don't reset
    }

    if (low > high) 
    {
        firstCall = true; // Reset for future searches
        return -1; 
    }

    int mid = low + (high - low) / 2; //find mid point value in array

    if(key == A[mid]) //if target value found
    {
        int result = mid;
        low = 0;
        high = arraySize -1;
        return mid; //return mid as this is base condition
    }
    
    if (isAscending) 
    {
        if(key < A[mid]) //remove all elements in the right side, including middle element
        {
            high = mid - 1;
            return binarySearchR(A, arraySize, key);
        }
        else{
            low = mid + 1;
            return binarySearchR(A, arraySize, key);
        }
    }
    else if (isDescending){
        if(key > A[mid]) //remove all elements in the right side, including middle element
        {
            high = mid - 1;
            return binarySearchR(A, arraySize, key);
        }
        else{
            low = mid + 1;
            return binarySearchR(A, arraySize, key);
        }
    }
    return binarySearchR(A, arraySize, key);
}

int binarySearchL(string* A, int arraySize, string key)
{
    int low  = 0;
    int high = arraySize - 1;
    int sortOrder = checkArraySort(A, arraySize);
    bool isAscending;
    bool isDescending;

    isAscending = (sortOrder == 1);
    isDescending = (sortOrder == -1);
    
    while(low <= high)
    {
        int mid =  low + (high - low) / 2;

        if(A[mid] == key)
        {
            return mid;
        }
        if(isAscending)
        {
            if(A[mid] > key)
            {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }  
        }
        else if(isDescending)
        {
            if(A[mid] < key)
            {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return -1;
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

    int sortChoice;
    cout << "------------------------" << endl;
    cout << "Sort in ascending (0) or descending (1) order or none (2)? ";
    cin >> sortChoice;

    if(sortChoice == 0)
    {
        selectionSortAsc(arr, count);
    }
    if(sortChoice == 1)
    {
        selectionSortDesc(arr, count);
    }
    if(sortChoice == 2)
    {
        cout << "Decided to not sort, continue." << endl;
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
        return 1;
    }

    string key; 

    cout << "Enter search key: ";
    cin >> key;

    int index = binarySearchL(arr, count, key);
    if(index != -1)
    {
        cout << "Found key " << key << " at index " << index << "!" << endl;
    }
    else{
        cout << "The key " << key << " was not found in the array!" << endl;
    }

    wordsOut.close();
    delete[] arr;

    return 0;
}