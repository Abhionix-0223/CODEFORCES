#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;
        ll gcd_even = 0, gcd_odd = 0;
        for (int i = 0; i < n; i += 2)
            gcd_even = __gcd(gcd_even, v[i]);
        for (int i = 1; i < n; i += 2)
            gcd_odd = __gcd(gcd_odd, v[i]);
        bool even_ok = true;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % gcd_even == 0)
            {
                even_ok = false;
                break;
            }
        }
        if (even_ok)
        {
            cout << gcd_even << '\n';
            continue;
        }
        bool odd_ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % gcd_odd == 0)
            {
                odd_ok = false;
                break;
            }
        }
        if (odd_ok)
            cout << gcd_odd << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}