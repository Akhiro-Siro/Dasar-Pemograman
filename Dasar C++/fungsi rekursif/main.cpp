#include <iostream>
using namespace std;


//fungsi rekursif terbatas
int pangkat(int a, int b){
    int hasil = a;
    for (int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

//rekursif
int pangkatRekursif(int a, int b){
    if (b <= 1){
        cout << "akhir dari rekursif\n";
        return a;
    }else{
        cout << "rekursif \n";
        return a * pangkatRekursif(a,(b-1));
    }
}

int main (){

    int a;
    int b;

    cout << "angka : ";
    cin >> a;
    cout << "pangkat : ";
    cin >> b;
    cout << "hasi literasi " << a << " pangkat  " << b << " = ";
    cout << pangkat(a,b) << endl;
    cout << pangkatRekursif(a,b);

    return 0;
}