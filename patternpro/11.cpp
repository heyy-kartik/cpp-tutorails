#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter : ";
    cin >> n;
    char count = 'A';
    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= row)
        {

            cout << count;
            j = j + 1;
            count = count + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
