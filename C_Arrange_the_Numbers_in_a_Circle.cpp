#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            ll n;
            cin >> n;
            vector<ll> v(n);
            ll no_of_one = 0;
            ll more_than_one = 0;
            ll ans = 0;
            ll sum = 0;

            for (ll i = 0; i < n; i++)
            {
                cin >> v[i];
                if (v[i] == 1)
                {
                    no_of_one++;
                }
                else if (v[i] >= 2)
                {
                    more_than_one++;
                    ans += v[i];
                }
            }

            if (more_than_one == 0)
            {
                cout << 0 << "\n";
                continue;
            }

            for (ll i = 0; i < n; i++)
            {
                if (v[i] >= 2)
                {
                    if (more_than_one == 1)
                    {
                        sum += v[i] / 2;
                    }
                    else
                    {
                        sum += (v[i] - 2) / 2;
                    }
                }
            }

            ans += min(no_of_one, sum);

            if (ans < 3)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << ans << "\n";
            }
        }
    }
    return 0;
}