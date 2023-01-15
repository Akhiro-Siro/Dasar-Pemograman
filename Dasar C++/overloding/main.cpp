#include <iostream>
using namespace std;


//overloding = menimpa

//fungsi biasa atau besic function
int luas_balok(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}
//overloding
int luas_balok(int panjang){
    int luas = panjang * panjang;
    return luas;
}
// dengan overload kita tidak usah menggunkan data default

//overloding juga bisa di gunakan untuk mengganti tipe data dari fungsi nya
double luas_balok(double sisi){
    return sisi * sisi;
}
int main (){

    cout << "menghitung luas 2x3 = " << luas_balok(2,3) << endl;
    cout << "menghitung luas 2 x 2= " << luas_balok(2) << endl;
    cout << "menghitung luas 2.5 x 2.5 = " << luas_balok(2.5) << endl;



    cin.get();
    return 0;
}
