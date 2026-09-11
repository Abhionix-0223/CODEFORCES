#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll sum = 0;
    vector<pair<int, int>> v(n, {0, 0});
    for (auto &x : v)
    {
        cin >> x.first;
        sum += x.first;
    }
    pair<ll, int> global = {0, -1};
    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int idx, val;
            cin >> idx >> val;
            idx--;
            if (v[idx].second > global.second)
            {
                v[idx].second++;
                sum -= v[idx].first;
                sum += val;
                v[idx].first = val;
            }
            else
            {
                sum -= global.first;
                sum += val;
                v[idx] = {val, global.second + 1};
            }
            cout << sum << '\n';
        }
        else
        {
            ll value;
            cin >> value;
            sum = value * n;
            global.first = value;
            global.second++;
            cout << sum << '\n';
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}