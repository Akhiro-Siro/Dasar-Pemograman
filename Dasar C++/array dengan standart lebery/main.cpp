#include <iostream>
#include <array>



int main(){

    //membuat array dengan menggunakan standart lebery
    //arrayint. jumlah array > nama array

    std::array < int, 5 > nilai;

    for(int i = 0; i <= 4; i++){
        nilai[i] = i;
        std::cout << "nilai [" << i << "] " << nilai[i] << " address : " << &nilai[i] << std::endl;
    }

    //mengambil ukuran array
    std::cout << nilai.size() << std::endl;

    //address awal
    std::cout << "address awal " << nilai.begin() << std::endl;
    //addres akhir
    std::cout << "address akhir " << nilai.end() << std::endl;
    //nilai dengan index
    std::cout << "nilai ke 2 = " << nilai.at(2) << std::endl;
    

    return 0;
}