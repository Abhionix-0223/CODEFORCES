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
        int n, x1,x2,k;
        cin>>n>>x1>>x2>>k;
        int ab = abs(x1-x2);
        cout<<(n<=3?1:min(n-ab,ab)+k)<<"\n";
    }
}