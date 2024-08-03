#include <iostream>
using namespace std;

int powerRecursive(int number, int power)
{

    if (power == 0)
    {
        return 1;
    }
    else
    {
        return number * powerRecursive(number, power - 1);
    }
}

int main()
{

    int result = powerRecursive(2, 3);

    cout<<result;

    return 0;
}