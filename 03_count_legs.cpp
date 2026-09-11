#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i = 0, x = 0;
        cin >> n;
        if (n % 2 == 0 && n != 0)
        {
                k = n / 2;
            if (k % 2 == 0)
            {
                for (i; x <= k; i++)
                {
                    x += 2;
                }
            }
            else
            {
                x = 1;
                for (i; x <= k; i++)
                {
                    x+=2;
                }
            }
            cout << i << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}