#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int zc = 0;
    for (char &c : s)
    {
        if (c == '0')
            zc++;
    }
    if (zc == 1 || zc % 2 == 0)
        cout << "BOB\n";
    else
        cout << "ALICE\n";
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