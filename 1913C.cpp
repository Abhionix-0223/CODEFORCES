#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s;
        int zc = 0, oc = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                oc++;
            else
                zc++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1' && zc > 0)
            {
                t.push_back('0');
                zc--;
            }
            else if (s[i] == '0' && oc > 0)
            {
                t.push_back('1');
                oc--;
            }
        }
        int ans = 0;
        if (zc == s.size() || oc == s.size())
            ans = s.size();
        else
        {
            int wrong = 0;
            for (int i = 0; i < t.size(); i++)
            {
                if (s[i] == t[i])
                    wrong++;
            }
            ans = s.size()-t.size()+wrong;
        }
        cout << ans << endl;
    }
}