#include <iostream>
using namespace std;

int main() {
    int r1, u1, r2, u2;
    cout << "r1:"; cin >> r1;
    cout << "u1:"; cin >> u1;
    cout << "r2:"; cin >> r2;
    cout << "u2:"; cin >> u2;

    //I = U / R
    cout << endl;
    if ((double)u1/r1 < (double) u2/r2){
        cout <<"Lower in: " << 1;
    }else if ((double) u1/r1 > (double) u2/r2){
        cout <<"Lower in: " << 2;
    }else {
        cout << "1 == 2";
    }
    return 0;
}
