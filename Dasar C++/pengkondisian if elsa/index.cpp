#include <iostream>

int main (){

    int a;

    std::cout << "masukan angka= ";
    std::cin >> a;

    //if statement
    //kondisi harus dalam tipe boolean
    //kodisi bisa berupa sama dengan, lebih dari atau kurang dari, gerbang logika dan masih banyak lagi
    if( a == 3 ){
        std::cout << "hallo" << std::endl;
    } //program di atas di bacanya jika a sama dengan 3 maka tampilkan perintah yang ada di dalam if sedangkan jika flase maka tamplikan perintah di dalam else
    else {
        std::cout << "anda tidak di kenal" << std::endl;
    }
    std::cout << "selesai" << std::endl;

    return 0;
}