#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> rem;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int r = x % m;
        rem[r]++;
    }
    int ans = 0;
    for (auto &x : rem)
    {
        int y = x.first;
        if (y > m / 2)
            continue;
        if (x.first == 0 || x.first * 2 == m)
        {
            if (x.second > 0)
            {
                x.second = 0;
                ans++;
            }
            continue;
        }
        int need = m - y;
        if (rem.find(need) != rem.end())
        {
            if (rem[need] != 0 && x.second != 0)
            {
                int mn = min(x.second, rem[need]);
                x.second -= (mn + 1);
                rem[need] -= (mn + 1);

                ans++;
            }
        }
    }
    for (auto &x : rem)
        ans += x.second > 0 ? x.second : 0;
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}