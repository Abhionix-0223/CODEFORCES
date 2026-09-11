#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n - 1, -1);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != '?' && s[i + 1] != '?')
            v[i] = s[i]-'0' + s[i + 1]-'0';
    }
   for (int i = 0; i < n-1; i++)
   {
        if(v[i]==-1)
        {
            // if()
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