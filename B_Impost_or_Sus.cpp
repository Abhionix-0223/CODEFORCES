#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int opt = 0;
        if (s[0] != 's')
        {
            opt++;
            s[0] = 's';
        }
        if (s[s.size() - 1] != 's')
        {
            opt++;
            s[s.size() - 1] = 's';
        }
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == 's')
                continue;
            if (s[i] == 'u' && s[i + 1] == 'u')
            {
                s[i + 1] = 's';
                opt++;
            }
        }
        cout << opt << endl;
    }
}