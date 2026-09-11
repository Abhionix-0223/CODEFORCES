#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll new_ceil(ll a, ll b)
{
    return (a + b - 1) / b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, x, y, z;
        cin >> n >> x >> y >> z;
        ll not_ai = new_ceil(n, x + y);
        ll ai;
        if (n <= x * z)
            ai = new_ceil(n, x);
        else
            ai = z + new_ceil(n - x * z, x + 10 * y);
        cout << min(not_ai, ai) << '\n';
    }
}