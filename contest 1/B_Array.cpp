#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> v,ans;;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int lowcount = 0, highcount = 0;

            for (int j = 1 + i; j < n; j++)
            {
                if (v[i] > v[j])
                    highcount++;
                else if (v[i] < v[j])
                    lowcount++;
            }
            ans.push_back(max(highcount,lowcount));
        }
        for(auto &a :ans)
        cout<<a<<" ";
        cout<<endl;
    }
}