#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        set<pair<int, int>> k;
        set<pair<int, int>> q;
        k = {{xk + a, yk + b}, {xk + a, yk - b}, {xk - a, yk + b}, {xk - a, yk - b}, {xk + b, yk + a}, {xk - b, yk + a}, {xk + b, yk - a}, {xk - b, yk - a}};
        q = {{xq + a, yq + b}, {xq + a, yq - b}, {xq - a, yq + b}, {xq - a, yq - b}, {xq + b, yq + a}, {xq - b, yq + a}, {xq + b, yq - a}, {xq - b, yq - a}};
        int count = 0;
        for (auto &a : k)
        {
            for (auto &b : q)
            {
                if (a == b)
                    count++;
            }
        }
        cout << count << endl;
    }
}