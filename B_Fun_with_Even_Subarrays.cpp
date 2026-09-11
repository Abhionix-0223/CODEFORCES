#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cover(ll len, ll cov)
{
    if (len <= cov)
        return 1;
    int opt = 0;
    while (len > cov)
    {
        opt++;
        cov *= 2;
    }
    return (len / cov) == pow(2, opt) ? opt + 1 : opt;
}
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
        for (auto &val : v)
            cin >> val;
        int len = 1, x = v[n - 1], ans = 0;
        while (n - len > 0)
        {
            if (v[n - len - 1] == x)
                len++;
            else
            {
                ans++;
                len *= 2;
            }
        }
        cout << ans << '\n';
    }
}