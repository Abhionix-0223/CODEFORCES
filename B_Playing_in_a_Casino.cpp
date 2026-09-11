#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> v[i][j];
    }
    ll total_sum = 0;
    for (ll j = 0; j < m; j++)
    {
       vector<ll>k;
       for (ll i = 0; i < n; i++)
        k.push_back(v[i][j]);
        sort(k.begin(),k.end());
        for (ll i = n-1; i >= 0; i--)
            total_sum+= i*k[i] - (n-1-i)*k[i];
    }
    cout<<total_sum<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}