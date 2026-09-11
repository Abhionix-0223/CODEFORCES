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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            mx = mx > v[i] ? mx : v[i];
        }
        bool pres[mx + n] = {false};
        for (int i = 0; i < n; i++)
        {
            pres[v[i]] = true;
        }
        
        vector<int> v2;
        for (int i = 1; i < mx + n; i++)
        {
            if (pres[i] == false)
            {
                v2.push_back(i);
            }
        }
        int x = 0;
        vector<int> v3;
        set<int> seen;
        for (int i = 0; i < n; i++)
        {
            int y = v[i];
            if (seen.insert(y).second)
            {
                v3.push_back(y);
            }
            else
            {
                v3.push_back(v2[x]);
                x++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v3[i] << " ";
        }
        cout << endl;
    }
}