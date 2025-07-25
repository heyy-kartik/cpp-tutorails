#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // print space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        // print 1st triangle
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }

        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        // print  2nd tri
        cout << endl;
        row = row + 1;
    }
}
