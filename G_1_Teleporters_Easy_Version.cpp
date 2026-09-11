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
        int n, c;
        cin >> n >> c;
        vector<int> ttc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ttc[i];
            ttc[i] += (i + 1);
        }
        sort(ttc.begin(), ttc.end());
        vector<ll> presum(n + 1, 0);
        for (int i = 1; i <= n; i++)
            presum[i] = presum[i - 1] + ttc[i - 1];
        cout<<(upper_bound(presum.begin(),presum.end(),c)-presum.begin()-1)<<'\n';
    }
}