#include <iostream>
#include <string>

using namespace std;


int main(){
    //perbandingan string
    string kata("siro");
    string nama_rahasia("siro");
    string input;

    // if(kata == "siro"){
    //     cout << "yas" << endl;
    // }

    while(true){
        cout << "masukan nama tebakan... : ";
        cin >> input;

        if(input == nama_rahasia){
            cout << "nama tebakan anda benar....! " << endl;
            break;
        }
            cout << "tebakan anda salah.. silahkan coba lagi!!! " << endl;
    }


    return 0;
}