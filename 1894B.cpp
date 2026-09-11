#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long> v(n);
        for (auto &a : v)
            cin >> a;
        for (auto &a : v)
        {
            if (a % k)
                a %= k;
            else
                a = k;
        }
        vector<pair<int, int>> idx;
        for (int i = 0; i < n; i++)
        {
            idx.push_back({-v[i],i+1});
        }
        sort(idx.begin(), idx.end());
        for (auto &a : idx)
            cout << a.second << " ";
        cout <<"\n";
    }
}