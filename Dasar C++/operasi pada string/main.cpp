#include <iostream>
#include <string>


using namespace std;

int main(){
    string kata = ("car");
    
    //operasi menampilkan data string
    cout << kata << endl;

    //operasi mengambil karakter berdasarkan index
    cout << "index ke 0 " << kata[0] << endl;
    cout << "index ke 1 " << kata[1] << endl;
    cout << "index ke 2 " << kata[2] << endl;

    //operasi merubah karakter pada index
    kata[1] = 'z';
    cout << kata << endl;

    //operasi menyambung atau concatenation
    string kata2(kata + "er");
    cout << kata2 << endl;

    string kata3(" betray");
    kata2.append(kata3);
    cout << kata2 << endl;

    string kata4("hp!");
    kata2 += " " + kata4;
    cout << kata2 << endl;


    return 0;
}