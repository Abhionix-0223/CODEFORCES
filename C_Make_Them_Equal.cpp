#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    int mismatch = 0;
    for (int i = 0; i < n; i++)
        if (s[i] != c)
            mismatch++;
    if (mismatch > 0)
    {
        bool ok = false;
        for (int i = n / 2; i < n; i++)
        {
            if (s[i] == c)
            {
                cout << 1 << '\n'
                     << i + 1 << '\n';
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << 2 << '\n'
                 << n - 1 << " " << n << '\n';
    }
    else
        cout << 0 << '\n';
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