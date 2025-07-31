#include <iostream>
using namespace std;

int reverse(int array[], int n) // Fixed: array[] indicates array parameter
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ array[i];
    }
    return ans;
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

    int array[5] = {2, 2, 76, 76, 5};

    int ans = reverse(array, 5);

    cout << ans << " is the Unique Number " << endl;
    return 0;
}