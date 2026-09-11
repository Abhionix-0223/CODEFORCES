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
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &val:v)
        cin>>val;
        if(is_sorted(v.begin(),v.end()))
        {
            int d = INT_MAX;
            for (int i = 0; i < n-1; i++)
            {
                d = min(d,abs(v[i+1]-v[i]));
            }
            cout<<ll(ceil((d+1)/2.0))<<"\n";
        }
        else cout<<0<<'\n';
    }
}