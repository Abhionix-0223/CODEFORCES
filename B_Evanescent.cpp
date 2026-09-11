#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int modify(string s)
{
    string t;
    char prev = s[0];
    t.push_back(prev);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != prev)
        {
            prev = s[i];
            t.push_back(prev);
        }
    }
    return t.size();
};
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int pos = -1, x = -1;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] != s[i - 1] && s[i] != s[i + 1])
        {
            x = i;
            if (s[i - 1] == s[i + 1])
            {
                pos = i;
                break;
            }
        }
    }
    if (pos != -1)
    {
        s.erase(s.begin() + pos);
        cout << modify(s) << '\n';
    }
    else
    {
        if (x != -1)
        {
            s.erase(s.begin() + x);
            cout << modify(s) << '\n';
        }
        else
        {
            s.erase(s.begin() + 1);
            cout << modify(s) << '\n';
        }
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
        solve();
    }
}