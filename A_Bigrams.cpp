#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
    int k;
    cin>>k;
    int count  = 0,count2 = 0;
    for (int i = 0; i < k; i++)
    {
       int x;
       cin>>x;
       if(x>=2)count2++;
        if(x>=3)count++;
    }
    if(count2>=2 || count>=1)
    cout<<"YES\n";
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