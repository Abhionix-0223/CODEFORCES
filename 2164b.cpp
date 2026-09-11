#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i=0,k = 0, b;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    //     sort(arr,arr+n);
    //   do
    //   {
    //     if(arr[i]!=0)
    //     {
    //         break;
    //     }
    //   }
    //    while (++i && i<n);
        
        for (; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                b = (arr[j] % arr[i]);
                if ( b % 2 == 0)
                {
                    cout << arr[i] << " " << arr[j] << endl;
                    k = 1;
                    break;
                }
            }
            if (k)
            {
                break;
            }
        }
        if (k == 0)
        {
            cout << -1 << endl;
        }
    }
}