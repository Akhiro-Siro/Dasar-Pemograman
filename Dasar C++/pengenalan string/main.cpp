#include <iostream>
#include <string>//standart libery string

using namespace std;

int main(){
    //string sebenarnya adalah kumpulan carakter

    // char kata[5] = {'m', 'o', 'b', 'i', 'l' };
    // cout << kata << endl;
    //array char tidak bisa kita tambah, fiks karena array makanya tidak di gunakan

    string kata("mobil");
    cout << kata << endl;

    string input;
    cout << "masukan kata.. : " << endl;
    cin >> input;

    cout << "kata anda : " << endl;
    cout << input << endl;

    return 0;
}