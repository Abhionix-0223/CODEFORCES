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
        ll n;
        string s;
        cin >> n >> s;
        map<char, bool> present;
        for (int i = 0; i < 26; i++)
            present['a' + i] = false;
        vector<int> distinct(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (present[s[i - 1]] == false)
            {
                distinct[i] = distinct[i - 1] + 1;
                present[s[i - 1]] = true;
            }
            else
                distinct[i] = distinct[i - 1];
        }
        ll sum = 0;
        for (int i = 1; i <= n; i++)
           sum += distinct[i];
        cout<<sum<<"\n";
    }
}