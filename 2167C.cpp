#include <iostream>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while (t--)
    {
         int n, b = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a = arr[0] % 2;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] % 2 != a)
            {
                b = 1;
            }
        }
        if (b)
        {
            sort(arr, arr + n);
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
             for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }    
    }   
}