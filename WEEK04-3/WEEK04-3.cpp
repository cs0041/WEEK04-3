#include <iostream>

using namespace std;

int main()
{
    int n, i, j, t;
    cout << "Please in put" << endl;
    cin >> n;
    for (i = n - 1; i >= 0; i--)
    {
        t = n - 1;
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (j == t - i || j == t + i)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (i = 1; i < n; i++)
    {
        t = n - 1;
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (j == t - i || j == t + i)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
