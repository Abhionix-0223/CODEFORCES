#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int odd = 0, eve_odd = 0, eve_eve = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2)
            odd++;
        else if (!(x % 2) && (x / 2) % 2)
            eve_odd++;
        else if (!(x % 2) && !((x / 2) % 2))
            eve_eve++;
    }
    cout << max(max(eve_eve, eve_odd), odd) << '\n';
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