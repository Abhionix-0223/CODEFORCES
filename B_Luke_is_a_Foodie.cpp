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
        ll n, x;
        cin >> n >> x;
        ll change = 0, upper_limit = LLONG_MAX, lower_limit = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            ll y;
            cin >> y;
            ll lb = y - x, ub = y + x;
            lower_limit = max(lower_limit, lb);
            upper_limit = min(upper_limit, ub);
            if (lower_limit > upper_limit)
            {
                change++;
                upper_limit = ub;
                lower_limit = lb;
            }
        }
        cout << change << endl;
    }
}