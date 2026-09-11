#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cin>>n;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
           int x;
           cin>>x;
           mn = min(mn, abs(x-0));
        }
        cout<<mn<<"\n";
}