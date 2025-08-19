#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {2, 5, 7, -3, 9, 34, 12, 45, 23, 43};

    cout << "Enter the Element " << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << " Key is present  at " << key << endl;
    }
    else
    {
        cout << " Key is absent " << endl;
    }

    return 0;
}