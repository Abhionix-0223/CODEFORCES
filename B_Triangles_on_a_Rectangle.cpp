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
        ll w, h;
        cin >> w >> h;
        ll k1, k2, k3, k4;
        vector<ll> v1;
        vector<ll> v2;
        vector<ll> v3;
        vector<ll> v4;
        cin >> k1;
        for (int i = 0; i < k1; i++)
        {
            ll x;
            cin >> x;
            v1.push_back(x);
        }
        cin >> k2;
        for (int i = 0; i < k2; i++)
        {
            ll x;
            cin >> x;
            v2.push_back(x);
        }
        cin >> k3;
        for (int i = 0; i < k3; i++)
        {
            ll x;
            cin >> x;
            v3.push_back(x);
        }
        cin >> k4;
        for (int i = 0; i < k4; i++)
        {
            ll x;
            cin >> x;
            v4.push_back(x);
        }
        ll d1 = v1[k1 - 1] - v1[0], d2 = v2[k2 - 1] - v2[0], d3 = v3[k3 - 1] - v3[0], d4 = v4[k4 - 1] - v4[0];
        ll a1 = d1 * h, a2 = d2 * h, a3 = d3 * w, a4 = d4 * w;
        ll area = max(a1, max(a2, max(a3, a4)));
        cout << area << "\n";
    }
}