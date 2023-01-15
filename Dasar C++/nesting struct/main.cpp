#include <iostream>
#include <string>

using namespace std;

struct aktor {
    string nama;
    int tahun;
};

struct filem{
    string judul;
    string genre;
    int tahun;
    //struct aktor
    aktor pemeran_1;
    aktor pemeran_2;
};


int main(){
    aktor aktor1, aktor2;
    filem filem1;

//buat aktor 1
    aktor1.nama = "akhiro siro";
    aktor1.tahun = 2005;
//buat aktor 2
    aktor2.nama = "ambo";
    aktor2.tahun = 2004;

    //buat filem
    filem1.judul = "halo tuli tuli";
    filem1.genre = "horor, dokumentasi";
    filem1.tahun = 2022;
    //masukan struct aktor
    filem1.pemeran_1 = aktor1;
    filem1.pemeran_2 = aktor2;

    cout << filem1.judul << endl;
    //cara pemanggilan struct di dalam struct
    cout << filem1.pemeran_1.nama << endl;
    cout << filem1.pemeran_2.nama << endl;


    return 0;
}