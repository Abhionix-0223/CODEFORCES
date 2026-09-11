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
        ll a, b;
        cin >> a >> b;
        vector<pair<int, int>> v;
        for (int i = 0; i <= 30; i++)
        {
            if (b == 1)
            {
                b++;
                continue;
            }
            ll new_a = a, count = 0;
            while (new_a >= b)
            {
                new_a /= b;
                count++;
            }
            v.push_back({count+1,i});
            b++;
        }
        ll min_opt = INT_MAX;
        for (int i = 0; i < v.size(); i++)
        {
            ll opt = v[i].first + v[i].second;
            min_opt = min(min_opt, opt);
        }
        cout << min_opt << "\n";
    }
}