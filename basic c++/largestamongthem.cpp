#include <iostream>
using namespace std;

int main()
{

    int n, largest, max = INT16_MIN;

    cout << "Enter the Number (stop to 0 )" << endl;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (n > max)
                {
                    max = n;
                }
            }
        }
    }
    cout << "Maximum element of this Inputs : " << max;
    return 0;
}