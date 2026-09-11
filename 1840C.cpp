#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for (auto &a : v)
            cin >> a;
        long long len = 0;
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            if (v[i] <= q)
                len++;
            else if (v[i] > q)
            {
                if (len >= k)
                {
                    long long a = len - k + 1;
                    ans += a * (a + 1) / 2;
                }
                len = 0;
            }
        }
        if (len >= k)
        {
            long long a = len - k + 1;
            ans += a * (a + 1) / 2;
        }
        cout << ans << endl;
    }
}