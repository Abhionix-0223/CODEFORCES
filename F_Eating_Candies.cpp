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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<ll> presum(n + 1, 0), sufsum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            presum[i + 1] = presum[i] + v[i];
            sufsum[i + 1] = sufsum[i] + v[n - 1 - i];
        }
        int mx = 0;
        for (int i = 1; i <=n; i++)
        {
           int x = lower_bound(presum.begin()+1, presum.end(), sufsum[i])- presum.begin();
           if(presum[x]==sufsum[i] && i+x<=n)
                mx = max(x+i, mx);
        }
        cout<<mx<<'\n';
    }
}