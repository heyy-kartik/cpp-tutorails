#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter : ";
    int count = 0;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= n)
        {
            count = count + 1;
            char ch = 'A' + count - 1;
            cout << ch;
            j = j + 1;
        }

        cout << endl;
        row = row + 1;
    }
}
