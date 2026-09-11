#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    int diff = 0, match = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            match++;
        if (a[i] == 1 && b[i] == 0)
            diff++;
    }
    if(match < n)
    {
        if (diff % 2)
            cout << 1 << '\n';
        else
            cout << (diff == 0 ? -1 : 2) << '\n';
    }
    else cout<<0<<'\n';
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