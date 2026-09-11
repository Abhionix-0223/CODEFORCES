#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mex(vector<int> &v, int n)
{
    vector<bool> present(n + 1, false);
    for (int i = 0; i < v.size(); i++)
        present[v[i]] = true;
    for (int i = 0; i <= n; i++)
    {
        if (present[i] == false)
            return i;
    }
}
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
        vector<int> v;
        int o1, o2, mx = 1;
        bool o = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!o)
                {
                    o1 = i;
                    o = 1;
                }
                else
                    o2 = i;
            }
            v.push_back(x);
        }
        int i = 1;
        int l1 = -1, r1 = -1;
        while (1)
        {
            if (o1 + i <= 2 * n - 1 && o1 - i >= 0 && v[o1 + i] == v[o1 - i])
            {
                l1 = o1 - i;
                r1 = o1 + i;
                i++;
            }
            else
                break;
        }
        if (l1 != -1)
        {
            vector<int> x;
            for (int i = l1; i <= r1; i++)
                x.push_back(v[i]);
            mx = max(mx, mex(x, n));
        }
        int j = 1;
        int l2 = -1, r2 = -1;
        while (1)
        {
            if (o2 + j <= 2 * n - 1 && o2 - j >= 0 && v[o2 + j] == v[o2 - j])
            {
                l2 = o2 - j;
                r2 = o2 + j;
                j++;
            }
            else
                break;
        }
        if (l2 != -1)
        {
            vector<int> x;
            for (int i = l2; i <= r2; i++)
                x.push_back(v[i]);
            mx = max(mx, mex(x, n));
        }
        int l3 = o1, l4 = o1, r3 = o2, r4 = o2;
        while (l3 < r3)
        {
            l3++;
            r3--;
            if (v[l3] != v[r3])
                break;
        }
        while (l4 - 1 >= 0 && r4 + 1 <= 2 * n - 1 && v[l4 - 1] == v[r4 + 1])
        {
            l4--;
            r4++;
        }
        if (l3 >= r3)
        {
            vector<int> x;
            for (int i = l4; i <= r4; i++)
                x.push_back(v[i]);
            mx = max(mx, mex(x, n));
        }
        cout << mx << "\n";
    }
}