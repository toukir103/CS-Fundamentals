#include<iostream>
using namespace std;
int min(int a,int b)
{
if(a>b) return a;
else return b;
}
int main()
{
   int a,b;

   cin>>a>>b;

      int max= min(a,b); 
       cout<<max<<endl;

    return 0;
}