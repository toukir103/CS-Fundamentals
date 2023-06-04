#include<bits/stdc++.h>
using namespace std;
int main()
{

     int a,b,c;
     cin>>a>>b>>c;
    int my_max=max({a,b,c});
    int my_min=min({a,b,c});
    cout<<my_min<<" "<<my_max;

    return 0;
}