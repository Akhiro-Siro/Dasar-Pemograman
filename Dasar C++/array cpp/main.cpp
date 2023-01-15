#include <iostream>
using namespace std;

int main (){

    int nilai[5];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;
    //membuat array juga bisa dengan int nilai[5] = {0,1,2,3,4};

    cout << &nilai[0] << " nilainya adalah : " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah : " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah : " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah : " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah : " << nilai[4] << endl;

    //merubah nilai dengan pointer
    int *ptr = nilai;
    *(ptr + 2) = 6;

    //dengan index
    nilai [3] = 7;
    cout << endl;
    cout << &nilai[0] << " nilainya adalah : " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah : " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah : " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah : " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah : " << nilai[4] << endl;
    
    //mengetahu jumlah member di array
    cout << endl;
    cout << "ukuran dari array : " << sizeof(nilai) << " byte" << endl;
    cout << "jumlah dari array : " << sizeof(nilai)/sizeof(int) << endl;

    
    return 0;
}
