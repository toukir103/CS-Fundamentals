#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    char name[100];
    int roll;
    int id;
    char section;
};
int main()
{
    // input data of shafin
    student shafin;
    shafin.roll = 25;
    shafin.id = 29;
    shafin.section = 'A';
    char nm[100] = "shafin";
    strcpy(shafin.name, nm);
      // input data of shakib
    student shakib;
    shakib.roll = 287;
    shakib.id = 265;
    shakib.section = 'B';
    char nm1[100] = "shakib";
    strcpy(shakib.name, nm1);

    cout << shakib.name << endl;
    cout << shafin.roll << endl;

        return 0;
}