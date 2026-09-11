#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long s = 0, cur = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        long long ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            cur += a[i], s -= a[i];
            ans = max(ans, __gcd(s, cur));
        }
        cout << ans << "\n";
    }
}