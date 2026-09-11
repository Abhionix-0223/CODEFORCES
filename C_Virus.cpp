#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> pos(m);
    for (auto &x : pos)
        cin >> x;
    sort(pos.begin(), pos.end());
    pos.push_back(pos[0]);
    vector<ll> diff;
    for (int i = 0; i < m; i++)
    {
        ll x = pos[i + 1] - pos[i];
        if (x > 0)
            diff.push_back(x - 1);
        else
            diff.push_back(n + x - 1);
    }
    sort(diff.rbegin(), diff.rend());
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        ll x = diff[i] - 4 * i;
        if (x > 0 && x != 1)
            ans += x - 1;
        if (x == 1)
            ans += 1;
    }
    cout << n - ans << '\n';
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