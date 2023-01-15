#include <iostream>
using namespace std;

//reporter
int kuadrat(int x){ //fungsi kembalian
    int y;
    y = x * x;
    return y;
}

//worker
void tampilkan (int input){ //fungsi yang tidak mengembalikan
    cout << input << endl;
}


int main (){

    int input, hasil;

    cout << "masukan angka untuk di kuadratkan  : ";
    cin >> input;
    hasil = kuadrat(input);
    cout << "hasil dari " << input << " kuadrat 2 adalah : ";
    tampilkan (hasil);


    return 0;
}