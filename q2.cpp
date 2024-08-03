#include <iostream>
using namespace std;

/*

 Recursive function: A function which will call itself until a certain criteria is met:

  In our case it will run up to when n == 0 and n == 1,

*/

int fibbonaciSeries(int n)
{

    if (n == 0)
    {
        return 0; // when n is 0
    }
    else if (n == 1)
    {
        return 1; // when n is 1
    }
    else
    {
        return fibbonaciSeries(n - 1) + fibbonaciSeries(n - 2); // when n is greater than 1
    }
}

int main()
{

    //  Asking for up to which term to generate fib series:
    cout << "Enter up to which to generate the fib series: " << endl;
    int n;
    cin >> n;

    // Generating the fib series:
    for (int i = 0; i < n; ++i)
    {
        cout << fibbonaciSeries(i) << " ";
    }

    return 0;
}