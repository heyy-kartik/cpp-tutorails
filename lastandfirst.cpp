#include <iostream>
#include <algorithm> // for sort
using namespace std;

int firstOccu(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;   // store index
            e = mid - 1; // keep searching in left half
        }
        else if (arr[mid] > key)
        {
            e = mid - 1; // search in left half
        }
        else
        {
            s = mid + 1; // search in right half
        }
    }
    return ans;
}

int main()
{
    int arr[7] = {3, 5, 7, 2, 8, 9, 3};

    sort(arr, arr + 7); // Binary search needs sorted array

    cout << "Index of the first occurrence of 3: " << firstOccu(arr, 7, 3) << endl;
    return 0;
}
