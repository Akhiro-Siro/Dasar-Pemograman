#include <iostream>
#include <string>

using namespace std;

//struct adalah data yang di bentuk oleh beberapa data

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};


int main(){
    buah aple;
    buah jeruk; 


    aple.warna = "merah muda";
    aple.berat = 10.25f;
    aple.harga = 25000;
    aple.rasa = "manis";

    jeruk.warna = "orenge";
    jeruk.berat = 100.5f;
    jeruk.harga = 1000;
    jeruk.rasa = "asam kecut";

    cout << "aple" << endl;
    cout << aple.warna << endl;
    cout << aple.berat << endl;
    cout << aple.harga << endl;
    cout << aple.rasa << endl;

    cout << "jeruk" << endl;
    cout << jeruk.warna << endl;
    cout << jeruk.berat << endl;
    cout << jeruk.harga << endl;
    cout << jeruk.rasa << endl;
    return 0;
}