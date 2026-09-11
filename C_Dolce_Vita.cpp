#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n), presum(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        presum[i + 1] = v[i] + presum[i];
    
    auto it_upper = std::upper_bound(presum.begin() + 1, presum.end(), x);
    int idx_upper = 0;

    if (it_upper != presum.begin() + 1)
    {
        idx_upper = it_upper - presum.begin() - 1;
    }
    ll limit = idx_upper * 1LL;
    ll ans = 0;
    if (limit <= 0)
    {
        cout << 0 << '\n';
        return;
    }
    for (int i = 1; i <= limit; i++)
    {
       ans += (x-presum[i] )/i + 1;
    }
    cout<<ans<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}