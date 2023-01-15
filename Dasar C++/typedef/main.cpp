#include <iostream>

using namespace std;

int main(){
//typedef adalah memberikan alias untuk tipedata

    typedef int I;
    typedef int ivektor2D[2];

    using number = double;

    I a = 10;
    ivektor2D b = {1,2};
    number c = 10.213;

    cout << "nilai a: " << a << endl;
    cout << "nilai b " << b[0] << " dan " << b[1] << endl;
    cout << "nilai c: " << c << endl;


    return 0;
}