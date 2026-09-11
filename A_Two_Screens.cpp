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
        string s1, s2;
        cin >> s1 >> s2;
        int z1 = s1.size(), z2 = s2.size();
        int mn = min(z1, z2);
        int match = 0;
        for (int i = 0; i < mn; i++)
        {
            if (s1[i] == s2[i])
                match++;
            else
                break;
        }
        if (match != 0)
            match--;
        cout << z1 + z2 - match << "\n";
    }
}