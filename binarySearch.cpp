#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{

    int i = 0, j = n - 1;
    int mid = (i + j) / 2;

    while (i <= j)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
        mid = (i + j) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 6, 4, 8, 9, 15};
    int odd[5] = {3, 6, 11, 17, 14};
    int oddSearch = BinarySearch(odd, 5, 17);
    int Search = BinarySearch(even, 6, 9);
    cout << "Index of the oddArray : " << oddSearch << endl;
    cout << "Return the Index of key : " << Search << endl;
}