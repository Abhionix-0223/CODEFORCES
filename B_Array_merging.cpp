#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a, b;
        unordered_map<int, int> ma, mb;
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            m.insert({x, 0});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            m.insert({x, 0});
        }
        int lena = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 || a[i] != a[i + 1])
            {
                ma[a[i]] = max(ma[a[i]], lena);
                lena = 1;
            }
            else
                lena++;
        }
        int lenb = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 || b[i] != b[i + 1])
            {
                mb[b[i]] = max(mb[b[i]], lenb);
                lenb = 1;
            }
            else
                lenb++;
        }
        for (auto &a : m)
        {
            a.second = ma[a.first] + mb[a.first];
        }
        int mx = -1;
        for (auto &a : m)
        {
            mx = max(mx, a.second);
        }
        cout << mx << endl;
    }
}