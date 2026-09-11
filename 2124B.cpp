#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<min(arr[1],arr[0])+arr[0]<<endl;
    }
}