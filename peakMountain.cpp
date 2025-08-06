#include <iostream>
using namespace std;
// peak Mountain using bs
int peakElement(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int array[5] = {0, 1, 5, 3, 2};
    cout << "Peak Element is : " << peakElement(array, 5) << endl;

    return 0;
}