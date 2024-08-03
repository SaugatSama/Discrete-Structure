#include <iostream>
using namespace std;

//  Binary Search Alogrithm:

int binarySearch(int arr[], int size, int key)
{
    //  Creating a highest and lowest point counter of the array:
    int index = 0;
    int max = size - 1;

    while (index <= max)
    {

        //   In binary search we use it like a dictionary and find the nearest element to it:
        int mid = (max + index) / 2;

        //  Returning the index value if found:
        if (arr[mid] == key)
        {
            return mid;
        }
        //  Decreasing the mid value and assignig the value to the max becuase the element is in sorted form, when the element is less than that of the index certainly the number is in lower index than that of the array
        else if (arr[mid] > key)
        {
            max = mid - 1;
        }
        //  Increasing the value of the index element as mid+1 because if the eleement is less than key then certainly the element is in higher index of the array
        else if (arr[mid] < key)
        {
            index = mid + 1;
        }
    }
    return -1;
}

int main()
{

    //  Creating an array in which Binary Algorithm is to be used:
    int n;
    cout << "Enter how many elements do you want in your array?" << endl;
    cin >> n;

    //  Creating a dynamic array using new :
    int *arr = new int[n];

    //   Asking for the elements inside of the array:
    cout << "Enter the number of the elements for your array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    //  Asking for the elemetnt to be searched:
    int key;
    cout << "Enter the element to be searched." << endl;
    cin >> key;

    //  Catching the result and displaying the result:
    int result = binarySearch(arr, n, key);
    cout << result;

    delete[] arr;

    return 0;
}