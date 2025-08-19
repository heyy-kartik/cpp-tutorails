#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT32_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{
    int min = INT32_MAX;
    for (int j = 0; j < n - 1; j++)
    {
        if (num[j] < min)
        {
            min = num[j];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum Numbers in the Array is " << getMax(num, size) << endl;
    cout << "Minimum Numbers in the Array is " << getMin(num, size) << endl;
}