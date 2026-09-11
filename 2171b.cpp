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
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] == -1)
            {
                arr[i] = 0;
            }
        }
        if ((arr[0] == -1 && arr[n - 1] != -1)  )
        {
            arr[0] = arr[n - 1];
        }
        else if (arr[0] != -1 && arr[n - 1] == -1)
        {
            arr[n-1]=arr[0];
        }
        
        else if (arr[0] == -1 && arr[n - 1] == -1)
        {
            arr[n - 1] = arr[0] = 0;
        }
        cout<<abs(arr[n-1]-arr[0]);
        for (int i = 0; i < n; i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}