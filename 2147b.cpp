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
      static  long long arr [40000+5];
        for (int i = 0; i < n; i++)
        {
            arr[i] = n - i;
        }
        arr[n] = n;
        for (int i = 1; i < n; i++)
        {
            arr[n + i] = i;
        }
        for (int i = 0; i < 2*n; i++)
        {
           cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
}