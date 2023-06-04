#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,my_max;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
   cin>> a[i];
}
      my_max= *max_element(a,a+n);

   cout<<my_max;
    return 0;
}