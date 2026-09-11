#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        map<int,int>m;
        int idx=0;
       while(n--)
       {
            if(s[idx]=='R'){
                m[idx++]++;
            }
            else
            {
                m[idx--]++;
            }
            
       }
        cout<<m.size()<<endl;
    }
}