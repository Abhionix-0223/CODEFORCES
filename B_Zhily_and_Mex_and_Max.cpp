#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findMEX(vector<ll> &nums)
{
    unordered_set<ll> elements(nums.begin(), nums.end());
    ll mex = 0;
    while (elements.count(mex))
        mex++;
    return mex;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll sum = 0;
    sort(v.begin(), v.end());
    sum += v[n - 1] * n;
    ll mex = findMEX(v);
    if(mex>v[n-1])
    {
        sum+= mex*(n-mex+1);
        sum+= (mex-2)*(mex-1)/2;
    }
    else
    {
        sum+=(n-mex-1)*mex;
        sum+= mex*(mex+1)/2;
    }
    cout<<sum<<'\n';
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
