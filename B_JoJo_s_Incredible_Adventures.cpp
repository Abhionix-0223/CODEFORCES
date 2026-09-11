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
        string s;
        cin >> s;
        bool yes = s.find('0') == string::npos ? 1 : 0;
        if (yes)
        {
            cout << s.size() * s.size() << '\n';
            continue;
        }
        s = s + s;
        ll maxlen = LLONG_MIN;
        ll len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                maxlen = max(len, maxlen);
                len = 0;
            }
            else
            {
                len++;
            }
            if (i == s.size() - 1)
            {
                maxlen = max(maxlen, len);
            }
        }
        // cout<<maxlen<<"\n\n";
        if (maxlen == 0)
            cout << 0 << "\n";
        else if (maxlen == 1)
            cout << 1 << "\n";
        else
            cout << ll(((maxlen+1)/2) * ceil((maxlen+1)/2.0)) << "\n";
    }
}