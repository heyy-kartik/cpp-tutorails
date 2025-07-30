#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 0; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(n) * factorial(n - r);
    int ans = num / denom;
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << " answer is " << nCr(n, r) << endl;
}