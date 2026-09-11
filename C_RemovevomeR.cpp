#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    string s;
    cin >>n>> s;
    int change = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
            change++;
    }
    if (change == 1)
        cout << 2 << '\n';
    else
        cout << 1 << '\n';
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