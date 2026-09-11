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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            mx = mx > arr[i] ? mx : arr[i];
        }
        cout << mx * n << endl;
    }
}