#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l = 0, r = s.size()-1;
        int x = 0;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                x+=2;
                l++;
                r--;
            }
            else
                break;
        }
        cout<<s.size()-x<<'\n';
    }
}