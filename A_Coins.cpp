#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2==0)cout<<"YES\n";
        else if( n>=k && k%2==1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}