#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    if (v[n - 2] <= v[n - 1])
    {
        if (v[n - 2] < 0 && v[n - 1] < 0)
        {
            if (is_sorted(v.begin(), v.end()))
                cout << 0 << '\n';
            else
                cout << -1 << '\n';
        }
        else
        {
            cout << n - 2 << '\n';
            for (int i = 0; i < n - 2; i++)
                cout << i + 1 << " " << n - 1 << " " << n << '\n';
        }
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