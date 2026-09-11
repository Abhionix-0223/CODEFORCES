#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        v.push_back(x);
        //  for (auto &a : v)
        //     cout << a << " ";
        // cout << endl;
        vector<int> d;
        for (int i = 0; i < v.size() - 1; i++)
            d.push_back(v[i + 1] - v[i]);
        d.back() = 2 * d.back();
        // for (auto &a : d)
        //     cout << a << " ";
        // cout << endl;
        int mx = -1;
        for (auto &a : d)
            mx = max(mx, a);
        cout << mx << endl;
    }
}