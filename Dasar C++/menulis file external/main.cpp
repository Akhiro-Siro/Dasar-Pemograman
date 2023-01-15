#include <iostream>
#include <fstream> //ofstream, ifstream, fstream

using namespace std;

int main(){

    ofstream myFile;

    //ios::out = operasi output,default
    //ios::app = menuliskan pada akhir baris
    //ios::trunc = membuat file jika tidak ada, dan akan menghapus jika sudah ada, default

    myFile.open("data2.txt", ios::app); //append
    myFile << " menulis data baru di data 2";
    myFile.close();

    myFile.open("data.txt");
    myFile << "halo siro gimana datanya? ";
    myFile.close();



    return 0;
}