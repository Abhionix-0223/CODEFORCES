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
        string s;
        cin >> s;
        s.push_back('X');
        int n = s.size();
        vector<vector<int>> char_len(26);
        string working;
        int len = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'X')
            {
                int idx = s[i-1] - 'a';
                char_len[idx].push_back(len);
            }
            if (s[i] == s[i - 1])
                len++;
            else
            {
                int idx = s[i-1] - 'a';
                char_len[idx].push_back(len);
                len = 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
           for (int j = 0; j < char_len[i].size(); j++)
           {
                if(char_len[i][j]%2!= 0)
                {
                    working.push_back('a'+i);
                    break;
                }
           } 
        }
        cout<<working<<'\n';
    }
}