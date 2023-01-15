#include <iostream>
using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

int tambah (int a, int b){
    int c;
    c = a + b;
    return c;
}

int main (){

    int input, hasil, a, b, hasil2;

    cout << "masukan angka untuk di kuadratkan  : ";
    cin >> input;
    hasil = kuadrat(input);
    cout << "hasil dari " << input << " kuadrat 2 adalah : " << hasil; 

    cout << "\n \nmasukan nilai a : ";
    cin >> a;
    cout << "masukan nilai b : ";
    cin >> b;

    hasil2 = tambah(a,b);
    cout << "hasil dari " << a << " + " << b << " = " << hasil2;


    return 0;
}