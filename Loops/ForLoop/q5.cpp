#include <iostream>
using namespace std;

int main () {
    int n= 5;
    for (int a =0; a<=n; a++) {
        for (int b =0; b<=n; b++) {
            if(b < a)
            cout << " ";
            else
            cout << a ;
        }
        cout <<" \n";
    }
    return 0;
}