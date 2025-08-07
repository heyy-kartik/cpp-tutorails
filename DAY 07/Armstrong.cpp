#include <iostream>
using namespace std;
#include <cmath>
bool Armstrong(int num)
{

    int count, originals = num;
    int digits = 0;
    while (num != 0)
    {
        digits++;
        num = num / 10;
    }
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, digits);
        num = num / 10;
    }
    return sum == num;
}
int main()
{
    int num;
    cout << " enter : " << endl;
    cin >> num;
    if (Armstrong(num))
    {
        cout << num << " is A Armstrong Numbers : " << endl;
    }
    else
    {
        cout << num << " not a Armstorng numbers  ";
    }
}