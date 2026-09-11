#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll max_time = b;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            max_time += min(x, a - 1);
        }
        cout << max_time << "\n";
    }
}