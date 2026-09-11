#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
    vector<int>v;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin>>x;
       v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<(min(v[2]-v[1],v[1]-v[0]))<<'\n';
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