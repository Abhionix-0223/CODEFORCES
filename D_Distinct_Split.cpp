#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n >> s;
        unordered_map<char, int> a, b;
        int mx = 0;
        for (int i = 0; i < n; i++)
            a[s[i]]++;
        for (int i = 0; i < n; i++)
        {
            b[s[i]]++;
            a[s[i]]--;
            if (a[s[i]] == 0)
                a.erase(s[i]);
            int tempmax = a.size() + b.size();
            mx = max(mx, tempmax);
        }
        cout<<mx<<endl;
    }
}