#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcm(ll a, ll b)
{
    return ((a * b) / __gcd(a, b));
}
ll sum(ll n)
{
    return n * (n + 1) / 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll common = n / lcm(x, y), only_x = n / x - common, only_y = n / y - common;
        ll remain = n - only_x, sum_y = 0, sum_x = 0;
        sum_x = sum(n) - sum(remain);
        sum_y = sum(only_y);
        cout << sum_x - sum_y << "\n";
    }
}