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
        ll n;
        cin >> n;
        bool yes = 0;
        unordered_map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        for (auto &val : m)
        {
            if (val.second >= 2)
            {
                yes = 1;
                break;
            }
        }
        if (yes)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}