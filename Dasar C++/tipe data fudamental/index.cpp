#include <iostream>

int main (){
    //int / integer untuk bilangan bulat
    int a = 20; //32-bit
    std::cout << a << std::endl;
    std::cout << sizeof(a) << " byte" << std::endl; //sizeof (mengetahi ukutan dari integer a) memori menggunakan byet
    // 1 byte = 8 bit. int itu 32 bit. nilai max dari int 2147483647. naili min int adalah -2147483648.

    long b = 30; //64-bit
    std::cout << b << std::endl;
    std::cout << sizeof(b) << " byte" << std::endl;
    // nilai max long = 9223372036854775807 nilai min long = -9223372036854775807

    short c = 10;
    std::cout << c << std::endl;
    std::cout << sizeof(c) << " byte"<< std::endl;
    //nilai max short = 32767 nilai min = -32767

    //float bilang decimal atau bilangan yang memiliki "," koma
    float d = 2.2;
    double e = 2.3;

    //karakter 
    char f = 'c'; //1 byte
    std:: cout << f << std::endl;

    //bolean
    bool g = true; //true atau benar
    bool h = false; //false atau salah

    return 0;
}