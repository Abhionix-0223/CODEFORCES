#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>> t;
   while (t--)
   {
     int n;
     cin>>n;
     long long int pr=1;
     for (int i = 0; i < n; i++)
     {  int no;
        cin>> no;
        pr*=no;
     }
     if (pr%10 ==2 || pr%10 == 3 || pr%10 == 5)
     {
         cout << "yes";
     }
     else
     {
         cout << "no";
     }
     
     
   }
   
}