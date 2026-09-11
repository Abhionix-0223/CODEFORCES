#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    if (n < 4)
    {
        cout << -1 << '\n';
        return;
    }
    int l = 0, r = n - 1;
    set<int> s(v.begin(), v.end());
    while (r - l + 1 >= 4)
    {
        int mn = *s.begin();
        int mx = *s.rbegin();
        if (v[l] == mn || v[l] == mx)
        {
            s.erase(v[l]);
            l++;
            continue;
        }
        if (v[r] == mn || v[r] == mx)
        {
            s.erase(v[r]);
            r--;
            continue;
        }
        cout << l + 1 << " " << r + 1 << '\n';
        return;
    }
    cout << -1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}