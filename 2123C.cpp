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
        int arr[n], arr2[n] = {0};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        arr2[0] = 1;
        arr2[n - 1] = 1;
        int prefix_min[n], prefix_max[n];
        int max = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            max = max > arr[i] ? max : arr[i];
            prefix_max[i] = max;
        }
        int min = 2e6 + 7;
        for (int i = 0; i <= n - 1; i++)
        {
            min = min < arr[i] ? min : arr[i];
            prefix_min[i] = min;
        }
        for (int i = 1; i <= n - 2; i++)
        {
            if (prefix_max[i + 1] > arr[i] && prefix_min[i - 1] < arr[i])
                continue;
            else
                arr2[i] = 1;
        }
        for (int i = 0; i < n; i++)
            cout << arr2[i];
        cout << endl;
    }
}