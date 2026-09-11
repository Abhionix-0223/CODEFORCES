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
        map<int, int> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            m[x]++;
        }
        bool yes = 0;
        for (auto &val : m)
        {
            if (val.second >= 2)
                yes = 1;
        }
        if (yes)
            cout << -1 << "\n";
        else
        {
            sort(v.begin(), v.end());
            for (int i = n-1; i >= 0; i--)
                cout << v[i] << " ";
            cout << "\n";
        }
    }
}