#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
        int n;
        string s;
        cin>>n>>s;
        long long digit=0;
        for (int i = 0; i < n; i++)
        {
            digit += (s[i]-'0')%10*pow(2,n-1-i);
        }
        cout<<digit<<endl;
   }
}