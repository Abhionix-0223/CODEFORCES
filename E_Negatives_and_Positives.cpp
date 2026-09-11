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
        int n;
        cin >> n;
        vector<int> v(n);
        int neg_count = 0;
        for (auto &val : v)
        {
            cin >> val;
            if (val <= 0)
                neg_count++;
        }
        ll sum = 0;
        if (neg_count % 2 == 0)
        {
            for (int i = 0; i < n; i++)
                sum += abs(v[i]);
            cout << sum << '\n';
        }
        else
        {
            int min_idx = 0;
            for (int i = 1; i < n; i++)
                min_idx = abs(v[min_idx]) < abs(v[i]) ? min_idx : i;
            for (int i = 0; i < n; i++)
                sum += abs(v[i]);
            cout << sum - 2 * abs(v[min_idx]) << '\n';
        }
    }
}