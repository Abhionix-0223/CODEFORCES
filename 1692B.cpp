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
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            max = max > arr[i] ? max : arr[i];
        }
        int arr2[max + 1] = {0};
        for (int i = 1; i <= max; i++)
            arr2[i] = 0;
        for (int i = 0; i < n; i++)
            arr2[arr[i]]++;
        int len = n;
        for (int i = 1; i <= max; i++)
        {
            if (arr2[i] == 0 || arr2[i] == 1)
                continue;
            else if (arr2[i] > 1)
            {
                if (arr2[i] % 2 == 0)
                    len -= 1;
                else
                    len -= (arr2[i] - 1);
            }
        }
        cout << len << endl;
    }
}