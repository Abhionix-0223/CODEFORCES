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
        for(auto &val:v)cin>>val;
        sort(v.begin(),v.end());
        ll sum = v[0];
        if(sum!=1)cout<<"NO\n";
        else{
            bool ok = true;
            for (int i = 1; i < n; i++)
            {
                if(sum<v[i]){
                    cout<<"NO\n";
                    ok = false;
                    break;
                }
                sum+=v[i];
            }
            if(ok)cout<<"YES\n";
        }
    }
}