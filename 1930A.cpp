#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v, v1;
        ;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        v1 = v;
        sort(v.begin(), v.end());
        if (k > 1)
            cout << "yes" << endl;
        else if (k == 1)
        {
            if (v == v1)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}