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
        ll add_one = 0;
        s = "10" + s + "01";
        ll len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                len++;
            else
            {
                add_one += len / 3;
                len = 0;
            }
        }
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == '1')
                add_one++;
        }
        cout << add_one << "\n";
    }
}