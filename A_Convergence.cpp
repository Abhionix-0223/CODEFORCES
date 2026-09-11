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
        for(auto &val :v)
        {
            cin>>val;
        }
        sort(v.begin(),v.end());
        int d =0;
        for (int i = 0; i < n/2; i++)
        {
            if(v[i]!=v[n-1-i])d++;
        }
        cout<<d<<'\n';
    }
}