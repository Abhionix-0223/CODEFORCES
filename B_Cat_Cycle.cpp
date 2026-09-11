#include <iostream>

using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        ll steps = k - 1;
        ll pos = (steps % n) + 1;
        cout << pos << '\n';
    }
    else
    {
        ll base_steps = k - 1;
        ll skips = base_steps / (n / 2);
        ll total_steps = base_steps + skips;
        ll pos = (total_steps % n) + 1;
        cout << pos << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}