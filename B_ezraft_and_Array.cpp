#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 1 << '\n';
    else if (n == 2)
        cout << -1 << '\n';
    else
    {
        cout << "1 2 3 ";
        ll x = 3;
        for (int i = 4; i <= n; i++)
        {
            x *= 2;
            cout << x << " ";
        }
        cout << '\n';
    }
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