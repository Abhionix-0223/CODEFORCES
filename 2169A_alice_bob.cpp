#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, B;
        cin >> n >> a;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] < a)
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        int L;
        int R;
        srand(time(0));
        if (l < r)
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] <= a && b[i + 1] >= a)
                {
                    L = a;
                    R = 2 * b[i + 1] - a;
                }
            }
        }
        else if (l > r)
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] <= a && b[i + 1] >= a)
                {
                    R = a;
                    if (2 * b[i] - a < 0)
                    {
                        L = 0;
                    }
                    else
                    {
                        L = 2 * b[i] - a;
                    }
                }
            }
        }
        else if (l == r)
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] <= a && b[i + 1] >= a)
                {

                    L = b[i];
                    R = b[i + 1];
                }
            }
        }
        int x = L + rand() % (R - L + 1);

        cout << x << endl;
    }
}