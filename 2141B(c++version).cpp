#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> A(n), B(m);
        for (auto &value : A)
            cin >> value;
        for (auto &value : B)
            cin >> value;
        int maxA = 1, maxB = -1;
        for (auto v : A)
            maxA = maxA > v ? maxA : v;
        for (auto v : A)
            maxB = maxB > v ? maxB : v;
        int max = maxA > maxB ? maxA : maxB;
        bool same[max] = {0};
        if (maxA > maxB)
        {
            for (int i = 0; i < n; i++)
                same[A[i]] = 1;
        }
        else
        {
            for (int i = 0; i < m; i++)
                same[B[i]] = 1;
        }
        
    }
}