#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &val : v)
        cin >> val;
    ll ans = 0;
    if (v[n - 1] == 1)
        ans++;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 1)
            ans += v[i];
    }
    cout<<ans<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}