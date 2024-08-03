#include <iostream>
using namespace std;

//  Finding the number and returning it's index value function:
int linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{

    //  Creating a set at first:
    int n;
    cout << "How many elements do you want in your array?" << endl;
    cin >> n;
    int *arr = new int[n];

    //   Asking for the elements in the array:

    cout << "Enter the elements for your array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    //  Asking for the key value to be searched:
    int key = 0;
    cout << "Enter the number you want to find in the array: " << endl;
    cin >> key;

    //  Getting the result and displaying the result:
    int result = linearSearch(arr, n, key);
    cout << "The number you want to find is " << key << " and it is in index " << result;

    delete[] arr;

    return 0;
}