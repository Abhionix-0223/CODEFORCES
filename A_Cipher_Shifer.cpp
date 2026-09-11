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
        int n;
        string s, new_s;
        cin >> n >> s;
        char curr = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != curr)
                continue;
            else
            {
                new_s.push_back(curr);
                if (i != n - 1)
                    curr = s[++i];
            }
        }
        cout << new_s << "\n";
    }
}