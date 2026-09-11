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
        int m, n;
        cin >> m >> n;
        int pos_count = 0, neg_count = 0;
        int mn = INT_MAX;
        vector<vector<int>> v;
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            vector<int> y;
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                mn = min(mn, abs(x));
                sum += abs(x);
                if (x >= 0)
                    pos_count++;
                else
                    neg_count++;
                y.push_back(x);
            }
        }
        if (neg_count % 2 == 0)
            cout << sum << "\n";
        else
            cout << sum - 2 * mn << "\n";
    }
}