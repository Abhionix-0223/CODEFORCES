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
        vector<int>v = {1,2,3,4,5};
        vector<int>&v2 = v;
        v.push_back(6);
        for (int i = 0; i < v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }
        
    }
}