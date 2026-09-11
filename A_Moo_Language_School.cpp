#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    vector<bool>charge(n/k,true);
    for (int i = 0; i <= n-k; i+=k)
    {
       for (int j = i; j < i+k; j++)
       {
            if(s[j]=='0')
            {
                charge[i/k] = false;
                break;
            }
       }  
    }
    int ans = 0;
    for (int i = 0; i < n/k; i++)
        ans+= charge[i];
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