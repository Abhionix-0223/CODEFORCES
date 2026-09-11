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
        ll n;
        cin >> n;
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        bool yes = 1;
        for (auto &val : m)
        {
            if (val.second < 2)
            {
                yes = 0;
                break;
            }
        }
        ll k = 1;
        ll y = m.size();
        if (yes)
        {
            for (auto &val : m)
            {
                ll x = val.second;
                queue<ll> q;
                for (int j = 0; j < x; j++)
                    q.push(k++);
                ll data = q.front();
                q.pop();
                q.push(data);
                for (int k = 0; k < x; k++)
                {
                    ll val = q.front();
                    q.pop();
                    cout << val << " ";
                }
            }
            cout << "\n";
        }
        else
            cout << -1 << "\n";
    }
}