#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

ll combination(ll x,ll y)
{
    return x<y? 0: x*(x-1)/2;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
        v[i] -= (i+1);
    }
    sort(v.begin(),v.end());
    ll same  = 1,count = 0;
    for (int i = 0; i < n-1; i++)
    {
       if(v[i]==v[i+1])same++;
       else 
       {
            count+= combination(same,2);
            same = 1;
       }
    
    }
    count+= combination(same,2);
    cout<<count<<'\n';
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