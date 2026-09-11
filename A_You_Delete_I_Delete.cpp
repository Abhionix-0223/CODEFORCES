#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int first_occurance_zero, first_occurance_one;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            first_occurance_zero = i;
            break;
        }
    }
    if (s[0] != '0')
        s.erase(s.begin() + first_occurance_zero);
    else
        s.erase(s.begin());
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == '1')
        {
            first_occurance_one = i;
            break;
        }
    }
    s.erase(s.begin() + first_occurance_one);
    cout << s << '\n';
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