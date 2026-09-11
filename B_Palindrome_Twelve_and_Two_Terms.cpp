#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    if (n % 12 != 10)
        cout << n % 12 << " " << 12 * (n / 12) << "\n";
    else
    {
        if (n == 10)
            cout << -1 << '\n';
        else
            cout << 22 << " " << n - 22 << '\n';
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