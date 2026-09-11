#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int p[N];
int a[N];
bool b[N];
int c[N];
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n, ct = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            b[i] = {false};
        }
        for (int i = 1; i <= n; i++)
        {
            c[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            if (p[i] == 0)
                ct++;
            else
                b[p[i]] = true;
        }
        for (int i = 1, j = 1; i <= n; i++)
        {
            if (b[i] == 0)
            {
                a[j] = i;
                j++;
            }
        }
        for (int i = 1, j = ct; i <= n; i++)
        {
            if (p[i] == 0)
            {
                p[i] = a[j];
                break;
            }
        }
        for (int i = n, j = 1; i >= 1; i--)
        {

            if (p[i] == 0)
            {
                p[i] = a[j];
                break;
            }
        }
        int l = -1, r = -1;
        for (int i = 1; i <= n; i++)
        {
            if (p[i] != c[i])
            {
                l = i;
                break;
            }
        }
        for (int i = n; i >= 1; i--)
        {
            if (p[i] != c[i])
            {
                r = i;
                break;
            }
        }
        if (l == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << r - l + 1 << endl;
        }
    }
}