
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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0, OddCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                OddCount++;
            }
        }
        int ei = 0;
        if (OddCount)
        {
            long long odd[OddCount];
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    sum += arr[i];
                }
                else
                {
                    odd[ei++] = arr[i];
                }
            }
            sort(odd, odd + OddCount);
            int c=(OddCount+1)/2;
            for (int i = OddCount - 1; c--; i--)
            {
                sum += odd[i];
            }
        }
        cout << sum << endl;
    }
}