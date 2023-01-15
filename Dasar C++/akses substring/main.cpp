#include <iostream>
#include <string>


using namespace std;

int main(){
    string kalimat_1("siro mulai berolahraga untuk menguruskan badan");
    string kalimat_2("siro suka makan pisnag untuk memulihkan stamina setelah olahraga");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // substring, mengambil string di tengah tengah
    //substr(index, panjang);

    cout << kalimat_2.substr(16, 6) << endl;

    //mencari posisi dari substring
    cout << kalimat_1.find("siro") << endl;//memberi tahu index dari kata yang ingin di cari

    int a = kalimat_1.find("untuk");
    cout << a << endl;
    cout << kalimat_1.find("tuk", a + 1) << endl;

    //mencari posisi dari belakang -rfind
    cout << kalimat_2.rfind("o") << e



    return 0;
}