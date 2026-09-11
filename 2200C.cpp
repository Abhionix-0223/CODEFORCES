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
        string str;
        str.push_back(s[0]);

        for (int i = 1; i < n; i++)
        {
            if (!str.empty() && s[i] == str.back())
            {
                str.pop_back();
            }
            else
            {
                str.push_back(s[i]);
            }
        }

        if (str.size() == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}