#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll qudratic(ll b, ll c)
{
    ll D = (ll)sqrt(b * b - 4 * c);
    return (-b + D) / 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n;
        m = n * (n - 1) / 2;
        vector<ll> b(m), a;
        for (auto &val : b)
            cin >> val;
        sort(b.begin(), b.end());
        a.push_back(b[m - 1]);
        ll bigger = 1, freq = 1;
        for (int i = m - 2; i >= 0; i--)
        {
            if (b[i + 1] == b[i])
                freq += 1;
            else if (b[i + 1] != b[i])
            {
                int curr = b[i + 1];
                int p = 2 * bigger - 1;
                int q = -2 * freq;
                int x = qudratic(p, q);
                for (int j = 0; j < x; j++)
                    a.push_back(curr);
                bigger += x;
                freq = 1;
            }
            if (i == 0)
            {
                int curr = b[i + 1];
                int p = 2 * bigger - 1;
                int q = -2 * freq;
                int x = qudratic(p, q);
                for (int j = 0; j < x; j++)
                    a.push_back(curr);
            }
        }
        if (m == 1)
            a.push_back(b[0]);
        sort(a.begin(), a.end());
        for (auto &val : a)
            cout << val << " ";
        cout << '\n';
    }
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll qudratic(ll b, ll c)
{
    ll D = (ll)sqrt(b * b - 4 * c);
    return (-b + D) / 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n;
        m = n * (n - 1) / 2;
        vector<ll> b(m), a;
        for (auto &val : b)
            cin >> val;

        sort(b.begin(), b.end());

        a.push_back(b[m - 1]);

        ll bigger = 1, freq = 1;
        for (int i = m - 2; i >= 0; i--)
        {
            if (b[i + 1] == b[i])
                freq += 1;
            else
            {
                int curr = b[i + 1];
                int p = 2 * bigger - 1;
                int q = -2 * freq;
                int x = qudratic(p, q);
                for (int j = 0; j < x; j++)
                    a.push_back(curr);
                bigger += x;
                freq = 1;
            }
        }

        int curr = b[0];
        int p = 2 * bigger - 1;
        int q = -2 * freq;
        int x = qudratic(p, q);
        for (int j = 0; j < x; j++)
            a.push_back(curr);

        reverse(a.begin(), a.end());

        for (auto &val : a)
            cout << val << " ";
        cout << '\n';
    }
}