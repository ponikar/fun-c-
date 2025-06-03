#include <iostream>
#include <array>
using namespace std;

int binarySearch(int arr[], int size, int serach) 
{
    int left = 0;           
    int right = size -1;   
    int mid = left + right / 2; 
    while (left <= right) 
    {
        if (arr[mid] == serach) 
        {
            return mid;
        }
        else if (arr[mid] > serach) 
        {
            right = mid - 1;
        }
        else 
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main() 
{
    int arr[15] = {2, 5, 8, 12, 15, 16, 23, 29, 38, 50, 56, 66, 72, 91, 99}; 
    int size = 15;
    int search;

    cout << "Enter the element to search: ";
    cin >> search;

    int result = binarySearch(arr, size, search);
    if (result != -1) 
    {
        cout << "Element " << search << " found at index " << result << endl;
    } 
    else 
    {
        cout << "Element " << search << " not found in the array" << endl;
    }
    return 0;
}