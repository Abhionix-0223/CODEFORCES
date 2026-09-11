#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<int> v(n);
    vector<ll> pos;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            pos.push_back(i + 1);
    }
    if (pos.size() < s)
        cout << -1 << '\n';
    else if (pos.size() == s)
        cout << 0 << '\n';
    else
    {
        ll ans = LLONG_MAX;
        int l = 0, r = s - 1;
        while (r < pos.size())
        {
            if (l == 0)
                ans = min(ans,  (n - pos[r + 1] + 1));
            else if (r == pos.size() - 1)
                ans = min(ans, pos[l - 1] );
            else
                ans = min(ans, pos[l - 1] + (n - pos[r + 1] + 1));
            l++;
            r++;
        }
        cout << ans << '\n';
    }
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