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
        int n, m;
        cin >> n >> m;
        vector<int> v;
        int max_len = 1, len = 1;
        bool yes = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
                len++;
            else
            {
                max_len = max(max_len, len);
                len = 1;
            }
        }
        max_len = max(max_len, len);
        if (max_len >= m)
            yes = 1;
        if (yes)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
}