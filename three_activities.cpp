#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b)
{
    return a > b ? a : b;
}
long long max3(long long a, long long b, long long c)
{
    int max = a;
    max = max > b ? max : b;
    max = max > c ? max : c;
    return max;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<long, int>> a, b, c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back({x, i + 1});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back({x, i + 1});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            c.push_back({x, i + 1});
        }
        long long mf = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        for (int i = n - 3; i < n; i++)
        {
            for (int j = n - 3; j < n; j++)
            {
                for (int k = n - 3; k < n; k++)
                {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                    {
                        mf = max(mf, a[i].first + b[j].first + c[k].first); 
                    }
                }
            }
        }
        cout << mf << endl;
    }
}