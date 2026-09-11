#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string next_string(string &s)
{
    int l = s.size();
    for (int i = l - 1; i >= 0; i--)
    {
        if (s[i] < 'z')
        {
            s[i]++;
            return s;
        }
        s[i] = 'a';
    }
    s.push_back('a');
    return s;
}

string the_mex(vector<string> &v)
{
    set<string> st(v.begin(), v.end());
    int len = v[0].size();
    string cur(len, 'a');
    while (st.count(cur))
        cur = next_string(cur);
    return cur;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int k = 1; k <= n; k++)
    {
        int tl = k;
        vector<string> v;
        string curr_mex(tl,'a');
        for (int i = 0; i < n - tl+1; i++)
        {
            for (int j = 0; j < tl; j++)
                curr_mex[j] = s[i + j];
            v.push_back(curr_mex);
        }
        string final_mex = the_mex(v);
        if(final_mex.size()==tl)
        {
            cout<<final_mex<<'\n';
            break;
        }    
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}