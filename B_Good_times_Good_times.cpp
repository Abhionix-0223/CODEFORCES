#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int x = n;
    ll ans = 1;
    while (x)
    {
        ans *= 10;
        x = x / 10;
    }
    cout << (ans + 1) << '\n';
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