#include <iostream>
using namespace std;

int reverse(int array[], int n) // Fixed: array[] indicates array parameter
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int logic = ans ^ array[i];

        return logic;
    }
}

int main()
{
    int ans;
    int array[5] = {2, 2, 3, 6, 5};

    int logic = reverse(array, 5);
    cout << logic;
    return 0;
}