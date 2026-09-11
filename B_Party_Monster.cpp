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
        int n, a = 0, b = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                a++;
            else
                b++;
        }
        if (a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}