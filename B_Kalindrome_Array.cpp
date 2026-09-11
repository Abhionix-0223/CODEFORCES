#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool palindrome(vector<int> &s, int i)
{
    if (i > s.size() / 2)
        return true;
    if (s[i] != s[s.size() - 1 - i])
        return false;
    return palindrome(s, i + 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &val : v)
            cin >> val;
        auto l = v.begin(), r = v.end() - 1;
        while (l <= r)
        {
            if (*l == *r)
            {
                l++;
                r--;
            }
            if(l>=r)
            {
                cout<<"YES\n";
            }
            else
            {
                vector<int> u, s;
                for (int i = 0; i < n; i++)
                {
                    if (i == l - v.begin())
                        continue;
                    else
                        u.push_back(v[i]);
                }
                for (int j = 0; j < n; j++)
                {
                    if (j == r - v.begin())
                        continue;
                    else
                        s.push_back(v[j]);
                }
                if(palindrome(u,0) || palindrome(s,0))
                {
                    cout<<"YES\n";
                    break;
                }
                else 
                {
                    cout<<"NO\n";
                    break;
                }
            }
        }
    }
}