#include <iostream>
#include <array>

using namespace std;


int main(){

    // array <int, 10 > nilaiMD = {}

    const int kolom = 3;
    const int baris = 2;
    array < array < int,kolom, baris > nilai = {0,1,2,3,4,5,6};

    cout << nilai[0][0] << " ";
    cout << nilai[0][1] << " ";
    cout << nilai[0][2] << " " << endl;



    return 0;
}