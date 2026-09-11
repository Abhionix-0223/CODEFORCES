#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b)
{
    return a > b ? a : b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long arr[n], arrbit[n + 1], arrk[n - k + 1] = {0};
        arrbit[0] = 1, arrbit[n] = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] * 2 > arr[i - 1])
                arrbit[i] = 1;
            else
                arrbit[i] = 0;
        }
        long long count = 0;
        long long len = 0;
        for (int i = 0; i <= n; i++)
        {
            if (arrbit[i] == 1)
                len++;
            else
            {
                count += max(0, len - k);
                len=1;
            }
        }
        cout << count << endl;
    }
}