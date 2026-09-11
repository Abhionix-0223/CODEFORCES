#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
    int n;
    cin>>n;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x = n/i;
        ans+= x*x;
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