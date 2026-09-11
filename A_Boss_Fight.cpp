#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    map<int, int> repeat;
    ll total_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        total_sum += x;
        repeat[x]++;
    }

    int max_repeat = 0;
    int val = 0;

    for (auto &p : repeat)
    {
        if (p.second > max_repeat)
        {
            max_repeat = p.second;
            val = p.first;
        }
    }

    int others = n - max_repeat;

    if (max_repeat <= others + 1)
    {
        cout << total_sum << '\n';
    }
    else
    {
        ll ans = total_sum - 1LL * (max_repeat - (others + 2)) * val;
        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}