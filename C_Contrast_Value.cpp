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
        vector<int> v(n);
        for (auto &val : v)
            cin >> val;
        vector<int> comp;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
                comp.push_back(-1);
            else if (v[i] > v[i - 1])
                comp.push_back(1);
            else if (v[i] == v[i - 1])
            {
                if (!comp.empty())
                {
                    auto it = comp.end();
                    it--;
                    if (*it == -1)
                        comp.push_back(-1);
                    else if (*it == 1)
                        comp.push_back(1);
                }
            }
        }
        if (comp.empty()) {
            cout << 1 << '\n';
            continue;
        }
        int len = 1;
        int m = comp.size() + 1; 
        for (size_t i = 1; i < comp.size(); i++)
        {
            if (comp[i] == comp[i - 1])
                len++;
            else
            {
                int x = len + 1;
                m -= (x - 2);
                len = 1;
            }
        }  
        int x = len + 1;
        m -= (x - 2);
        if (m == 0 || (n == 2 && v[0] == v[1]))
            cout << 1 << '\n';
        else
            cout << m << '\n';
    }
}