#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll distance(ll i, ll j, vector<pair<ll,ll>>&v)
{
    return abs(v[i].first - v[j].first) + abs(v[j].second - v[i].second);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<ll,ll>>v(n);
        for (ll i = 0; i < n; i++)
            cin>>v[i].first>>v[i].second;   
        ll mina = LLONG_MAX/2, minb =LLONG_MAX/2;
        for (ll i = 0; i < k; i++)
        {
            // if(i==a-1 || i==b-1)continue;
           mina = min(distance(i,a-1,v), mina);
           minb = min(distance(i,b-1,v), minb);
        }
        cout<<min(mina+minb, distance(a-1,b-1,v))<<'\n';
    }
}