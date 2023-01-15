#include <iostream>
#include <algorithm>
#include <array>


const size_t arraySize = 10;

void printarray(std::array <int, arraySize> &angka){
    std::cout << "array: ";
    for(int &a : angka){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}


int main(){
    std::array <int, arraySize> angka = {1,3,2,4,5,7,6,8,9,0};
    printarray(angka);

    int angkaCari;
    bool dapat;
// shot dulu array nya
//baru saerch arraynya -> binary_saerch
    std::cout << "mencari angka yang ada di dalam array yang ada diatas>> :  \n";
    std::cin >> angkaCari;
    std::sort(angka.begin(), angka.end());
    dapat = std::binary_search(angka.begin(), angka.end(), angkaCari);

    if (dapat){
    std::cout << "dapat di temukan" << std::endl;
    }else{
        std::cout << "tidak di temukan" << std::endl;
    }
    return 0;
}