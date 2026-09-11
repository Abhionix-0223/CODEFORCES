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
        string s;
        cin >> n >> s;
        bool match = false, palindrome = true;
        int match_idx = -1;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - 1 - i] && match == false)
            {
                match = true;
                match_idx = i;
            }
            if (s[i] != s[n - 1 - i])
            {
                if (match && match_idx > 0)
                {
                    palindrome = false;
                    break;
                }
                else
                    continue;
            }
        }
        if (palindrome)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}