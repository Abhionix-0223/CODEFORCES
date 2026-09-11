#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(ll w, ll c, vector<ll> &v)
{
    ll ans = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        ans += (v[i] + w) * (v[i] + w);
        if (ans > c)
            return 1;
    }
    if (ans == c)
        return w;
    else if (ans < c)
        return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll high = 1e9, low = 1, mid = (high + low) / 2;
        ll ans = 0;
        while (low <= high)
        {
            ans = check(mid, c, v);
            if (ans == 1)
                high = mid - 1;
            else if (ans == -1)
                low = mid + 1;
            else
                break;
            mid = (high + low) / 2;
        }
        cout << ans / 2 << "\n";
    }
}