#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int zc = 0, oc = 0, tc = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                zc++;
            else if (x == 1)
                oc++;
            else if (x == 2)
                tc++;
            v.push_back(x);
        }
        int ans = zc;
        if (oc <= tc)
        {
            ans += oc;
            ans += (tc - oc) / 3;
        }
        else if (oc > tc)
        {
            ans += tc;
            ans += (oc - tc) / 3;
        }
        cout<<ans<<"\n";
    }
}