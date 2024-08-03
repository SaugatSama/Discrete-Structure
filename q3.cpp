#include <iostream>
using namespace std;

//  Creating a function use Insertion Sort Algorithm:

// Insertion Sort Algorithm
int* insertionSort(int array[], int totalNumber) {
    for (int i = 1; i < totalNumber; ++i) {
        int key = array[i];
        int j = i - 1;

        // Move elements of array[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
     return array;
}

int main()
{

    //  Enter how many elements do you want in your set.....
    int n;
    cout << "Enter how many elements do you want in your set?" << endl;
    cin >> n;

    //  Creating a dynamic Set using new:
    int *set = new int[n];

    //  Asking for elements:
    cout << "Enter the elements for your set:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> set[i];
    }

    set = insertionSort(set, n);

//   After using insertion sort alogrithm:
 cout<<"The resultant set after using insertion sort algorithm:"<<endl;
    for(int i=0; i<n; ++i){
          cout<<set[i]<<" ";
    }

    return 0;
}