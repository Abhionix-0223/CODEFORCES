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
        long long px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        long long sum = 0,mx = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mx = max(mx,x);
            sum += x;
        }
        long long min_distance = max(0LL,2*mx - sum), max_distance = sum;
        long long dist = (py - qy) * (py - qy) + (px - qx) * (px - qx);
        if (dist > max_distance*max_distance || dist < min_distance*min_distance)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}