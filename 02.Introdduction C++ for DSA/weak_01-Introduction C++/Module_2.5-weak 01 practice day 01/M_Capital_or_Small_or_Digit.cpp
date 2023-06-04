#include<bits/stdc++.h>
using namespace std;
int main() {
    char X;
    cin >> X;

    if (isdigit(X)) {
        cout << "IS DIGIT" << endl;
    } else {
        cout << "ALPHA" << endl;
        if (islower(X)) {
            cout << "IS SMALL" << endl;
        } else {
            cout << "IS CAPITAL" << endl;
        }
    }

    return 0;
}
