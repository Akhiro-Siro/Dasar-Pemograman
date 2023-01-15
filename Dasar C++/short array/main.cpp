#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printarray(std::array <int, arraySize> &angka){
    std::cout << "array: ";
    for(int &a : angka){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void printarray(std::array <char, arraySize> &angka){
    std::cout << "array: ";
    for(char &a : angka){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::array <int, arraySize> angka = {9,2,3,4,1,2,9,5,6,0};
    std::array <char, arraySize> huruf = {'a', 'd', 'b', 'c', 'e', 'f', 'g', 'j', 'y', 'o'};

    printarray(angka);
    printarray(huruf);

    std::cout << std::endl;

    std::sort(angka.begin(), angka.end());
    printarray(angka);

    std::sort(huruf.begin(), huruf.end());
    printarray(huruf);


    return 0;
}