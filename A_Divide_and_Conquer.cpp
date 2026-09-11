#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
    ll x, y;
    cin>>x>>y;
    if(x%y==0)cout<<"YES\n";
    else cout<<"NO\n";
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