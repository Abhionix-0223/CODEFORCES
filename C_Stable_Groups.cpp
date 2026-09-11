#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    vector<ll> gap;
    for (ll i = 0; i < n - 1; i++)
    {
        if ((v[i + 1] - v[i]) > x)
            gap.push_back(v[i + 1] - v[i]);
    }
    sort(gap.begin(), gap.end());
    ll m = gap.size(), fill = 0;
    for (ll i = 0; i < m; i++)
    {
        ll need = gap[i] / x;
        need = gap[i] % x == 0 ? --need : need;
        if (k >= need)
        {
            k -= need;
            fill++;
        }
    }
    cout << m - fill + 1 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}