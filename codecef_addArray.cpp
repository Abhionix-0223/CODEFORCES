#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N]={0};
int main()
{
    int n;
    cin >> n;
    int q;
    cin>>q;
    for (int i = 1; i <=q; i++)
    {
       int a,b,k;
       cin>>a>>b>>k;
       for (int i = a; i <= b; i++)
       {
            arr[i]+=k;
       }  
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr+1,arr+n+1);
   cout<<endl<<arr[n];

}