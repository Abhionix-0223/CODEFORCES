#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &val : v)
        cin >> val;
    vector<int> u(q);
    for (auto &val : u)
        cin >> val;
    unordered_map<int, int> val_idx;
    for (int i = n - 1; i >= 0; i--)
        val_idx[v[i]] = i + 1;
    for (int i = 0; i < q; i++)
    {
        cout << val_idx[u[i]] << " ";
        for (auto &val : val_idx)
        {
            if (val.second < val_idx[u[i]])
                val.second++;
        }
        val_idx[u[i]] = 1;
    }
}
