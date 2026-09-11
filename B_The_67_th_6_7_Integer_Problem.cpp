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
        ll mx = INT_MIN;
        ll sum = 0;
        for (int i = 0; i < 7; i++)
        {
            ll x;
            cin >> x;
            mx = max(mx, x);
            sum += x;
        }
        cout << 2 * mx - sum << "\n";
    }
}