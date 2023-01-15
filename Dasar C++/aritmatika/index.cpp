#include <iostream>

int main() {

    int a = 10;
    int b = 8;
    int hasil;

    std::cout << " nilai yang di lakukan aritmatika" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    //operatornya +, -, *, /, %.

    //penjumlahan
    hasil = a + b;
    std::cout << a << " + " << b << " = " << hasil << std::endl;

    //pengurangan
    hasil = a - b;
    std::cout << a << " - " << b << " = " << hasil << std::endl;

    //perkalian
    hasil = a * b;
    std::cout << a << " X " << b << " = " << hasil << std::endl;

    //pembagian
    hasil = a / b;
    std::cout << a << " : " << b << " = " << hasil << std::endl; //dikarenakan ini bertipe int maka hasil 1,25 di jadikan 1
    //kesimpulanya : kolo kita mau membagi yang mengasilkan "," salah satunya harus float dan modulu tidak bisa saat ada float

    //modulus atau sisa bagi
    hasil = a % b;
    std::cout << a << " % " << b << " = " << hasil << std::endl;

    // urutan eksekusi

    hasil = (a + b) * a; //yang di beri kurung akan di kerjakan lebih dulu kolo tidak di kasih kurung kali dan bagi di kerjakan duluan
    std::cout << hasil << std::endl;

    return 0;
}