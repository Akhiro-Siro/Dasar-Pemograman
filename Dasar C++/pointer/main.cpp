#include <iostream>
using namespace std;


int main (){

    int a = 5;
    //int a memiliki nilai dan addres(alamat)

    //ponter
    int *aptr = &a;

    cout << "nilai dari a adalah " << a << endl;
    cout << "ini adalah alamat dari a " << aptr <<endl;

    //derefencing, mengambil data dari sebuah ponter

    cout << "mengambil data dari pointer aptr : " << *aptr << endl;

    return 0;
}
