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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        unordered_map<int, vector<int>> pos;
        unordered_map<int, multiset<int>> diff;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pos[v[i]].push_back(i + 1);
        }
        for (int i = 1; i <= k; i++)
        {
            if (pos[i].empty())
                continue;
            diff[i].insert(pos[i][0] - 1);
            for (int j = 1; j < pos[i].size(); j++)
                diff[i].insert(pos[i][j] - pos[i][j - 1] - 1);
            diff[i].insert(n - pos[i][pos[i].size() - 1]);
        }
        for (auto &val : diff)
        {
            auto it = val.second.end();
            it--;
            int x = *it;
            val.second.erase(it);
            val.second.insert(x / 2);
        }
        int mn = INT_MAX;
        for (auto &val : diff)
        {
            auto it = val.second.end();
            it--;
            mn = min(mn, *it);
        }
        cout << mn << '\n';
    }
}