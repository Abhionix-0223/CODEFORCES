#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    vector<vector<int>> group;
    for (auto &val : v)
    {
        if (group.empty() || val.first != group.back().back() + 1)
        {
            vector<int> k;
            group.push_back(k);
        }
        group.back().push_back(val.first);
    }
    ll sum = 0;
    for (int i = 0; i < group.size(); i++)
    {
        int curr_sum = v[group[i][0]];
        for (int j = 1; j < group[i].size(); j++)
            curr_sum += max(0, v[group[i][j]] - v[group[i][j - 1]]);
        sum += curr_sum;
    }

    cout << sum << '\n';
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