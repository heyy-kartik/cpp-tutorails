#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many Terms in Series :";
    cin >> n;

    int a = 0, b = 1;

    if (n >= 1)
        cout << a << " ";
    if (n >= 2)
        cout << b << " ";

    for (int i = 2; i < n; i++)
    {
        int ans = a + b;
        cout << ans << " ";
        a = b;
        b = ans;
    }

    return 0;
}
