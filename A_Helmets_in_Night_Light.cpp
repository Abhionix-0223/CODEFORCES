#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, p;
        cin >> n >> p;
        vector<long long> a, b;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            b.push_back(x);
        }
        vector<pair<long long, long long>> v;
        for (long long i = 0; i < n; i++)
            v.push_back({b[i], -a[i]});
        sort(v.begin(), v.end());
        long long m = n - 1;
        long long cost = p;
        for (long long i = 0; i < n && v[i].first <= p; i++)
        {
            if (m <= 0)
                break;
            long long add = min(m, -v[i].second);
            m -= add;
            cost += add * v[i].first;
        }
        if (m > 0)
            cost += m * p;
        cout << cost << endl;
    }
}