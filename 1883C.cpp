#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n), mod(n);
        for (auto &a : v)
        {
            cin >> a;
        }
        if (k != 4)
        {
            for (int i = 0; i < n; i++)
            {
                mod[i] = v[i] % k;
            }
            int mn = INT_MAX;
            int mx = -1;
            for (auto &a : mod)
            {
                mn = min(mn, a);
                mx = max(mx, a);
            }
            if (mn == 0)
                cout << 0 << endl;
            else
                cout << k - mx << endl;
        }
        else if (k == 4)
        {
            for (int i = 0; i < n; i++)
            {
                mod[i] = v[i] % 2;
            }
            int zc = 0, oc = 0;
            for (int i = 0; i < n; i++)
            {
                if (mod[i] == 0)
                    zc++;
                else if (mod[i] == 1)
                    oc++;
            }
            if (zc >= 2)
                cout << 0 << endl;
            else if (zc == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (mod[i] == 0 && v[i] % 4 != 0)
                        cout << 1 << endl;
                    else if (mod[i] == 0 && v[i] % 4 == 0)
                        cout << 0 << endl;
                }
            }
            else if (zc == 0)
            {
                bool yes = 1;
                for (int i = 0; i < n; i++)
                {
                    if (mod[i] == 1 && v[i] % 4 == 3)
                    {
                        cout << 1 << endl;
                        yes = 0;
                        break;
                    }
                }
                if (yes)
                    cout << 2 << endl;
            }
        }
    }
}