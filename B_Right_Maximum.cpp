#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans = 0;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if(v[i]>=mx)
            {
                ans++;
                mx = v[i];
            }
        }
        
        cout<<ans<<endl;
    }
}