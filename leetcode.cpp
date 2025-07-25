#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        int digits = n % 10;
        product = product * digits;
        n = n / 10;
        sum = sum + digits;
    }
    int answer = product - sum;
    cout << answer;
}
