#include <iostream>

int main(){
    int x; //pendeklarasian x bertipe integer kosong atau 0
    x = 20; // memberi nilai ke x yang bertipe integer
    std::cout << x << std::endl; // pemanggilan x ke konsol


    int i;
    std::cout << "masukan angka: ";
    std::cin >> i; // cin (console input) meamasukan inputan ke variabel i
    std::cout << "nilai yang di masukan anda adalah: ";
    std::cout << i << std::endl;


    return 0;
}