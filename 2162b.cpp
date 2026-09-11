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
        string s;
        cin >> s;
        vector<int> v0;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                v0.push_back(i + 1);
            else if (s[i] == '1')
                v1.push_back(i + 1);
        }
        if (v0.size() > v1.size())
        {
            cout << v1.size() << endl;
            for (int i = 0; i < v1.size(); i++)
            {
                cout << v1[i] << " ";
            }
        }
        else
        {
            cout << v0.size() << endl;
            for (int i = 0; i < v0.size(); i++)
            {
                cout << v0[i] << " ";
            }
        }
        cout << endl;
    }
}