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
            if (s[i] == '1')
               {
                    if(zc==0)break;
                    t.push_back('0');
                    zc--;
               } 
            else if (s[i] == '0')
                {
                    if(oc==0)break;
                    t.push_back('1');
                    oc--;
                }
            
        }
       
        cout<<s.size()-t.size()<<endl;
    }
}