#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        s = '#' + s + '#';
        int maxlen = 0;
        int len = 0;
        int ec = 0;
       // cout<<s<<endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                len++;
                ec++;
            }
            else
            {
                maxlen = max(maxlen, len);
                len = 0;
            }
        }
       // cout<<maxlen<<endl;
        if (maxlen >= 3)
            cout << 2 << endl;
        else
            cout << ec << endl;
    }
}