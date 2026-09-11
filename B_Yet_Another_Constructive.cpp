#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    if (m < k)
        cout << "NO\n";
    else
    {
        cout<<"YES\n";
        vector<ll> ans(n, 1);
        ll rest = m - k + 1;
        int idx = k - 1;
        while (idx < n)
        {
            ans[idx] = rest;
            idx += k;
        }
        for(auto &x : ans)
        cout<<x<<" ";
        cout<<'\n';
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