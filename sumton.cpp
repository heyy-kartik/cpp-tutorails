#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the Number ";
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)

            sum = sum + 1;
        i = i + 1;
    }
    cout << " SUM OF 1 TO N " << sum << endl;
    return 0;
}