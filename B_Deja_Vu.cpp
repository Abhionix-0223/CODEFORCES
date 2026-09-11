#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int v2(ll x)
{
    int cnt = 0;

    while (x % 2 == 0)
    {
        cnt++;
        x /= 2;
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<vector<int>> pos(31);

        for (int i = 0; i < n; i++)
        {
            int p = v2(a[i]);
            pos[p].push_back(i);
        }

        while (q--)
        {
            int x;
            cin >> x;

            vector<int> moved;

            for (int p = x; p <= 30; p++)
            {
                for (int idx : pos[p])
                {
                    a[idx] += (1LL << (x - 1));
                    moved.push_back(idx);
                }

                pos[p].clear();
            }

            for (int idx : moved)
            {
                pos[x - 1].push_back(idx);
            }
        }

        for (ll x : a)
            cout << x << " ";

        cout << '\n';
    }
}