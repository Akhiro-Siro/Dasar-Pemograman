#include <iostream>

int main (){

    //salah satu percabangan selain if statemnt

    int a;

    std::cout << "masukan angka : ";
    std::cin >> a;

    //switch case
    switch(a == 6) {
        case true:
        std::cout << "nilai benar 5" << std::endl;
    }

    switch(a) {
        case 10:
        std::cout << "nilai benar 10" << std::endl;
        break; // untuk menhentikan program
        case 1:
        std::cout << "nilai benar 1" << std::endl;
        case 2:
        std::cout << "nilai benar 2" << std::endl;
        case 3:
        std::cout << "nilai benar 3" << std::endl;
        case 4:
        std::cout << "nilai benar 4" << std::endl;
        case 5:
        std::cout << "nilai benar 5" << std::endl;
        default: //menentukan nilai default atau sama dengan else
        std::cout << "default" << std::endl;
    }
    //jika case yang paling atas bernilai benar maka program yang ada di case di bawahnya akan di jalankan juga

    std::cout << "nilai yang anda masukan " << a << std::endl;
    return 0;
}