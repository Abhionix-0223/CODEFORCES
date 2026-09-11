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
        vector<long long> v;
        int oc = 0, ec = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        long long k = 2;
        for (int i = 0; i <= 57; i++)
        {
            set<long long> reminder;
            for (int j = 0; j < n; j++)
                reminder.insert(v[j] % k);
            if (reminder.size() == 2)
            {
                cout << k << endl;
                break;
            }
            else
                k *= 2;
        }
    }
}