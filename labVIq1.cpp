#include <iostream>
using namespace std;

// Function for checking if the matrix is reflexive
void checkReflexive(int **arr, int size)
{
    bool isReflexive = true;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i][i] != 1)
        {
            isReflexive = false;
            break;
        }
    }

    if (isReflexive)
    {
        cout << "It is a reflexive relation." << endl;
    }
    else
    {
        cout << "It is not a reflexive relation." << endl;
    }
}

// Function to check if the function is symmetric:

void checkSymmetric(int **arr, int size)
{

    int symmetric = true;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
                break;
            }
            if (!symmetric)
                break;
        }
    }

    if (symmetric)
    {
        cout << "The given realtion is symmetric." << endl;
    }
    else
    {
        cout << "The given realtion is not symmetric." << endl;
    }
}

//  Function for asymmetric:
void checkAsymmetric(int **arr, int size)
{
    bool isAsymmetric = true;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[i][j] == arr[j][i])
            {
                isAsymmetric = false;
                break;
            }
        }

        if (!isAsymmetric)
            break;
    }

    if (isAsymmetric)
    {
        cout << "The realtion is asymmetric." << endl;
    }
    else
    {
        cout << "The realtion is not asymmetric." << endl;
    }
}

void checkTransitive(int **arr, int size)
{

    bool isTransitive = false;

    for (int i = 0; i < size; ++i)
    {

        for (int j = 0; j < size; ++j)
        {

            if (arr[i][j] == 1)
            {
                for (int k = 0; k < size; ++k)
                {
                    if (arr[j][k] == 1 && arr[i][k] == 1)
                        isTransitive = true;
                    break;
                }
            }
        }
    }
    if (isTransitive)
    {
        cout << "The realtion is transitive" << endl;
    }
    else
        cout << "The realtion is not transitive" << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the matrix (number of rows and columns): ";
    cin >> size;

    // Allocate memory for the 2D array
    int **arr = new int *[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = new int[size];
    }

    // Input the matrix
    cout << "Enter the matrix values (0 or 1): " << endl;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cin >> arr[i][j];
        }
    }

    // Check if the matrix is reflexive
    checkReflexive(arr, size);

    checkSymmetric(arr, size);

    checkAsymmetric(arr, size);

    checkTransitive(arr, size);

    // Deallocate memory
    for (int i = 0; i < size; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
