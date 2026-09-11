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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto &val : v)
            cin >> val;
        sort(v.begin(), v.end());
        vector<ll> presum(n / 2 + 1, 0), endsum(n + 1, 0);
        int j = 1;
        for (int i = 0; i < n; i += 2)
        {
            if (n % 2 != 0 && i == n - 1)
                break;
            presum[j] = presum[j - 1] + v[i] + v[i + 1];
            j++;
        }
        for (int i = 1; i <= n; i++)
        {
            endsum[i] = endsum[i - 1] + v[n - i];
        }
        int x = k;
        ll sum = endsum[n], maxsum = sum - presum[k];
        while (k--)
        {
            maxsum = max(maxsum, sum - endsum[x - k] - presum[k]);
        }
        cout<<maxsum<<"\n";
    }
}