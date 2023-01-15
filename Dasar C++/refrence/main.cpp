#include <iostream>
using namespace std;

int main (){

    //variable
    int a = 5;

    cout << "addres a adalah " << &a <<endl;
    cout << "nilai dari a " << a << endl;

    //refrence
    int &b = a;
    cout << "addres a adalah " << &b <<endl;
    cout << "nilai dari a " << b << endl;

    b = 15;
    cout << "nilai dari a adalah : " << a << endl;
    cout << "nilai dari b adalah : " << b << endl;

    return 0;
}