#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            m[c] = m[c] + 1;
        }
        vector<int> odd;
        for (auto &a : m)
        {
            if (a.second % 2 != 0)
                odd.push_back(a.second);
        }
        if (odd.size() <= k + 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}