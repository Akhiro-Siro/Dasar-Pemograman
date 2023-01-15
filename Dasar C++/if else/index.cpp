#include <iostream>

int main() {

    int a;

    std::cout << "masukan angka =";
    std::cin >> a;

    //else if bergunua untuk menambahkan kondisi lebih dari 1 jumlah else if bisa banyak
    if (a > 10) {
        std::cout << "hai angka yang anda masukan terpilih" << std::endl;
    }else if (a == 5){
        std::cout << "hai angka yang anda masukan speseial" << std::endl;
    } else {
        std::cout << "coba masukna angka yang lain, semoga mendapatkan angka special" << std::endl;
    }

    std::cout << "angka anda " << a <<std::endl;

    return 0;
}