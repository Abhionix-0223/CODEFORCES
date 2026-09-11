#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            vector<int> a;
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                a.push_back(x);
                m[x]++;
            }
            v.push_back(a);
        }
        bool flag = 1;
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i] >= (n - 1) * (n - 1) + n)
                flag = 0;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}