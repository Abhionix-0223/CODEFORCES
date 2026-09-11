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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> a;
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                a.push_back(x);
            }
            v.push_back(a);
        }
        int mismatch = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                mismatch += (v[i][j] != v[n - 1 - i][n - 1 - j]);
        }
        int min_ops = mismatch / 2;
        if (k < min_ops)
            cout << "NO\n";
        else
        {
            if (n % 2)
                cout << "YES\n";
            else
                cout << ((k - min_ops) % 2 ? "NO\n" : "YES\n");
        }
    }
}