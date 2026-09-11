#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sides(ll a, ll b)
{
    return (a + b + 2 * a * b);
}
ll check(ll a, ll b, ll p, ll q)
{
    ll c = a * b;
    int side = sides(a, b);
    if (!(c % 2))
    {
        if (0 <= q and q <= c + 2 and (side - 2 * c - 4) <= p and p <= side)
            return 1;
        else
            return 0;
    }
    else
    {
        if (0 <= q and q <= c + 1 and (side - 2 * c - 2) <= p and p <= side)
            return 1;
        else
            return 0;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll p, q;
        cin >> p >> q;
        ll x = 2e4, size = p + 2 * q;
        bool yes = 0;
        vector<pair<ll, ll>> y;
        for (ll i = 1; i < x; i++)
        {
            for (ll j = i; j < x; j++)
            {
                ll n = sides(i, j);
                if (n == size)
                {
                    y.push_back({i, j});
                    break;
                    yes = 1;
                }
                if (n > size)
                    break;
            }
        }
        bool flag = 1;
        // for (int i = 0; i < y.size(); i++)
        // {
        //     cout<<y[i].first<<" "<<y[i].second<<"\n";
        // }
        
        for (ll i = 0; i < y.size(); i++)
        {
            int a = y[i].first, b = y[i].second;
            if (check(a, b, p, q))
            {
                cout << a << " " << b << "\n";
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << -1 << "\n";
    }
}