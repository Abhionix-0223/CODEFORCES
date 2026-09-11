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
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int mx = -1;
        for (int i = 0; i < 2 * n; i++)
        {
            mx = mx > v[i] ? mx : v[i];
        }
        int vcount[mx + 1] = {0};
        for (int i = 0; i < 2 * n; i++)
        {
            vcount[v[i]]++;
        }
        int totaloddcount = 0, divby4 = 0, divby2 = 0, oddcount = 0, uniquecount = 0;
        for (int i = 1; i < mx + 1; i++)
        {
            if (vcount[i] == 0)
            {
                continue;
            }
            else if (vcount[i] % 2 != 0)
            {
                oddcount++;
                uniquecount++;
            }
            else if (vcount[i] % 4 == 0)
            {
                divby4++;
                uniquecount++;
            }
            else if (vcount[i] % 2 == 0)
            {
                divby2++;
                uniquecount++;
            }
        }
        totaloddcount += oddcount + 2 * divby2 + divby4 * 2;
        if (divby4 % 2 != 0 && oddcount == 0)
        {
            totaloddcount -= 2;
        }
        cout << totaloddcount << endl;
    }
}