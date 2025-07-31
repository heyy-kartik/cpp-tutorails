#include <iostream>
using namespace std;

void reverse(int array[], int n) // Fixed: array[] indicates array parameter
{
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(array[i], array[i + 1]);
    }
}

void printArray(int array[], int n)
{

    for (int i = 0; i < n; i++) // Fixed: i < n instead of i <= n
    {
        cout << array[i] << " ";
    }
}

int main()
{

    int array[5] = {34, 2, 76, 8, 5};

    reverse(array, 5);
    printArray(array, 5);
    return 0;
}