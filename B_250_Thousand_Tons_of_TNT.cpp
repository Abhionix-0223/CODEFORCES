#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, min1 = LLONG_MAX, max1 = LLONG_MIN, max_diff = 0;
        cin >> n;
        vector<ll> v, factor, presum(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            presum[i + 1] = presum[i] + x;
            min1 = min(x, min1);
            max1 = max(max1, x);
        }
        max_diff = max(max_diff, max1 - min1);
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                factor.push_back(i);
                if (i != n / i)
                    factor.push_back(n / i);
            }
        }
        for (ll i = 0; i < factor.size(); i++)
        {
            if (factor[i] == n || factor[i] == 1)
                continue;
            ll mn = LLONG_MAX, mx = LLONG_MIN;
            ll l = 0, r = factor[i];
            for (ll j = 0; j < n / factor[i]; j++)
            {
                ll dif = presum[r] - presum[l];
                mx = max(mx, dif);
                mn = min(mn, dif);
                l = r;
                r+= factor[i];
            }
            max_diff = max(max_diff, mx - mn);
        }
        cout << max_diff << "\n";
    }
}