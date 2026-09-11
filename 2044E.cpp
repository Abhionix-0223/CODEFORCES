#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int n = 0;
        int count = 0;
        while (1)
        {
            long pdt = (long)pow(k, n) * l1;
            if (pdt < r2 && pdt > l2)
                count++;
        }
    }
}