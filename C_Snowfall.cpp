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
        int n;
        cin >> n;
        vector<int> V, v2, v3, v6, v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 6 == 0)
                v6.push_back(x);
            else if (x % 3 == 0)
                v3.push_back(x);
            else if (x % 2 == 0)
                v2.push_back(x);
            else
                v1.push_back(x);
        }

        for (int i = 0; i < v6.size(); i++)
            V.push_back(v6[i]);
        for (int i = 0; i < v2.size(); i++)
            V.push_back(v2[i]);
        for (int i = 0; i < v1.size(); i++)
            V.push_back(v1[i]);
        for (int i = 0; i < v3.size(); i++)
            V.push_back(v3[i]);
        for (int i = 0; i < n; i++)
        {
           cout<<V[i]<<" ";
        }
        cout<<"\n";
    }
}