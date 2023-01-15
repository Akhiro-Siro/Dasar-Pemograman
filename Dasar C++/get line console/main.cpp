#include <iostream>
#include <string>

    using namespace std;

int main(){
    string kalimat_input;

    //getLine(cin, variable)-cin mengambil input dari console
    cout << "masukan input..: ";
    getline(cin, kalimat_input);
    cout << "input yang anda masukukan..: " << kalimat_input << endl;

    //jumlah kata dari input
    int posisi = 0;
    int jumlah = 0;

    while (true){
        posisi = kalimat_input.find(" ", posisi + 1);
        jumlah++;
        if(posisi < 0){
            break;
        }
    }
    cout << "jumlah kata adalah..: " << jumlah << endl;

    return 0;
}