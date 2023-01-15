#include <iostream>

using namespace std;

//enum data yang tetap
enum warna{
    merah, putih, hitam, coklat, kuning, biru
};


int main(){

    warna kain;

    kain = merah;
    cout << kain << endl;

    return 0;
}