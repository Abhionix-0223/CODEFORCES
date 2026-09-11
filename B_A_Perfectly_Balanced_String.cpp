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
        string s;
        cin >> s;
        set<char> unique;
        for (auto &newchar : s)
            unique.insert(newchar);
        int unique_char = unique.size();
        unique.clear();
        auto l = 0, r = l + unique_char - 1;
        bool ok = true;
        while (r != s.size())
        {
            set<char> part_unique;
            for (int i = l; i <= r; i++)
                part_unique.insert(s[i]);
            if (part_unique.size() == unique_char)
            {
                l++;
                r++;
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}