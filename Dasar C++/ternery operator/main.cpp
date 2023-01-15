#include <iostream>
#include <string>

using namespace std;
//ternery operator = ?
//kondisi ? hasil1 : hasil2

int main(){

    int a,b;
    string hasil1,hasil2,output;

    hasil1 = "siro";
    hasil2 = "ambo";

    a = 5;

    cout << "masukan angka ? ";
    cin >> b;

    output = (a < b ) ? hasil1 : hasil2 ;

    cout << output << endl;


    return 0;
}