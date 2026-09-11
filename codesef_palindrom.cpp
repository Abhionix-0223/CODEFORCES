#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s, s2(n,'\0');
        cin >> s;
        for (int i = 0; i < n; i++)
            s2[i] = s[n - 1 - i];
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (s.substr(l - 1, r-l+1) == s2.substr(n - r, r-l+1))
            {
                cout << "yes" << endl;
            }
            else
                cout << "no" << endl;
        }
    }
}