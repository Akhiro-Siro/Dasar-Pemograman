#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream myFile;
    string data4,buffer;
    bool isData;
    int no;
    string nama;

    //ios::in, default
    //ios::ate = mulai dari akhir file
    //ios::binery



    myFile.open("data4.txt");

    while(!isData){
        getline(myFile,buffer);
    data4.append("\n" + buffer);
    if (buffer == "data"){
        isData = true;
    }
    }

    cout << data4 << endl;

    getline(myFile, buffer);
    cout << buffer << endl;
    int jumlahData = 0;
    while(myFile.eof()){
        myFile >> no;
        myFile >> nama;
        cout << no << "\t" << nama << endl;
        jumlahData++;
    }
    cout << "jumlah data = " << jumlahData << endl;

    return 0;
}