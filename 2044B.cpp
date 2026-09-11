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
        string ans;
        for (int i = s.size(); i >= 0; i--)
        {
            if (s[i] == 'p')
                ans.push_back('q');
            else if (s[i] == 'q')
                ans.push_back('p');
            else if (s[i] == 'w')
                ans.push_back('w');
        }
        cout << ans << endl;
    }
}