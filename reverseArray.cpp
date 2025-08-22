#include <iostream>
using namespace std;

void reverse(int array[], int n) // Fixed: array[] indicates array parameter
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int array[], int n)
{

    for (int i = 0; i < n; i++) //
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