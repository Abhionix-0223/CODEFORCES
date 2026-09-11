#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
    int n;
    cin>>n;
    int x = n+1;
    bool ok = true;
    for (int i = 2; i <= x/2; i++)
    {
        if(x%i==0)
        {
            ok = false;
            break;
        }
    }
    cout<<(ok?"YES\n":"NO\n");
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