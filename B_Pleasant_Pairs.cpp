#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    map<int, int> pos;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pos[x] = i + 1;
    }

    int ans = 0;

    for (auto &x : pos)
    {
        int y = x.first;
        int loop_need = (2 * n) / y;

        for (int i = 1; i <= loop_need; i++)
        {
            if (i >= y)
                continue;
            if (pos.find(i) != pos.end())
            {
                if (x.second + pos[i] == y * i)
                    ans++;
            }
        }
    }

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