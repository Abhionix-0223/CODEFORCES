#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll>  query(q);
    vector<ll> max_height(n + 1, 0), max_rise(n + 1);
    ll max_ri = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        max_ri = max(max_ri, x);
        max_rise[i + 1] = max_ri;
        max_height[i + 1] = max_height[i] + x;
    }
    for (auto &val : query)
    {
        cin >> val;
        int pos = upper_bound(max_rise.begin(), max_rise.end(), val) - max_rise.begin() - 1;
        cout << max_height[pos] << " ";
    }
    cout << '\n';
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