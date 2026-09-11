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
        int ma = INT_MIN;
        vector<int> v(n);
        for (auto &val : v)
        {
            cin >> val;
            ma = max(ma, val);
        }
        sort(v.begin(), v.end());
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == ma)
                b.push_back(v[i]);
            else
                a.push_back(v[i]);
        }
        if (!b.empty() && !a.empty())
        {
            cout << a.size() << " " << b.size() << "\n";
            for (int i = 0; i < a.size(); i++)
                cout << a[i] << " ";
            cout << "\n";
            for (int j = 0; j < b.size(); j++)
                cout << b[j] << " ";
            cout << "\n";
        }
        else
            cout << -1 << "\n";
    }
}