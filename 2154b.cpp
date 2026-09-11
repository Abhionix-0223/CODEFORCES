#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long pref[n];
        pref[0] = arr[0];
        for (int i = 1; i < n; i++)
            pref[i] = max(pref[i - 1], arr[i]);
        for (int i = 1; i < n; i += 2) {
            arr[i] = pref[i];
        }
        for (int i = 0; i < n; i += 2)
        {
            if (i != 0 && arr[i - 1] > arr[i])
                continue;
            else if (i != 0 && arr[i - 1] <= arr[i])
            {
                count += (arr[i] - arr[i - 1])+1;
            }
            else if (arr[0] >= arr[1])
            {
                count += (arr[0] - arr[1])+1;
            }
        }
        cout << count << endl;
    }
}