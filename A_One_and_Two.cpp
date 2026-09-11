#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count2 = 0;
    for (auto &val : v)
    {
        cin >> val;
        if (val == 2)
            count2++;
    }
    if (count2 % 2 == 0)
    {
        int i, count = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] == 2)
                count++;
            if (count == count2 / 2)
                break;
        }
        cout << i + 1 << '\n';
    }
    else
        cout << -1 << '\n';
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