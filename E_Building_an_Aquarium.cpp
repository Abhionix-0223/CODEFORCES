#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll height(ll h, vector<ll> &v)
{
    ll d = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]<h)
        d += h - v[i];
    }
    return d;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (auto &a : v)
        {
            cin >> a;
        }
        sort(v.begin(), v.end());
        ll ans = 1e9;
        ll high = 2e9, low = 1, mid = (low + high) / 2;
        while (low <= high)
        {
            ll h = height(mid,v);
            if(h>x)
            {
                high = mid-1;
                mid = (high+low)/2;
            }
            else if(h<=x)
            {
                ans = mid;
                low = mid+1;
                mid = (high+low)/2;
            }
        }
        cout << ans << "\n";
    }
}