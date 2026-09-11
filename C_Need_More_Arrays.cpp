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
        stack<int>v;
        v.push(-1);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(v.top()+1<x)v.push(x);
        }
        cout<<v.size()-1<<"\n";
    }
}