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
        long long sum = 0;
        int zero_count = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
            if (x == 0)
                zero_count++;
        }
        sort(v.begin(), v.end());
        if (sum == n)
        {
            cout << 1 << endl;
        }
        else if (sum > n)
        {
            int unique = n - zero_count;
            if (sum - unique >= n - 1)
                cout << unique << endl;
            else
            {
                while (unique >= 1)
                {
                    unique--;
                    if (sum - unique >= n - 1)
                    {
                        cout << unique << endl;
                        break;
                    }
                }
            }
        }
    }
}