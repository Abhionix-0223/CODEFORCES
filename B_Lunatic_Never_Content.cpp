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
        vector<int> v(n), diviser;
        int ans = abs(v[n - 1] - v[0]);
        for (auto &val : v)
            cin >> val;
        for (int i = 0; i < n / 2; i++)
            ans = __gcd(ans, abs(v[n -1- i] - v[i]));
        cout << ans << "\n";
    }
}