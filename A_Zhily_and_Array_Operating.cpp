#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &val : v)
        cin >> val;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] + v[i + 1] > v[i])
            v[i] = v[i] + v[i + 1];
    }
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
            pos++;
    }
    cout << pos << '\n';
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