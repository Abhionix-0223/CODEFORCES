#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        int y = x;
        vector<int> v;
        int sum = 0;
        while (x)
        {
            if (x < 10 && x > 0)
            {
                v.push_back(x - 1);
                sum += x;
                x = x / 10;
            }
            else
            {
                v.push_back(x % 10);
                sum += x%10;
                x = x / 10;
            }
        }
        sort(v.begin(), v.end());
        int opt = 0;
        while (sum > 9)
        {
            sum -= v.back();
            v.pop_back();
            opt++;
        }
        cout << opt << endl;
    }
}