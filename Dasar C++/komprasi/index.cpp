#include <iostream>

int main() {

    int a = 2;
    int b = 2;

    //komparasi / relation expression
    bool hasil1, hasil2;

    //sebanding ==
    hasil1 = (a == b);
    std::cout << hasil1 << std::endl; //kolo nilai 1 adalah true dan 0 false
    //membandingkan a = b maka akan 1 dan kolo tidak sama 0

    //tidak sebanding !=
    hasil2 = (a != b);
    std::cout << hasil2 << std::endl;
    //membandingkan apakah a tidak sama dengan b, karena a sama dengan b maka hasilnya 0 dan jika a tidak sama dengan b maka 1

    //kurang dari <
    hasil2 = (a < b);
    std::cout << hasil2 << std::endl;//akan menghasilkan 0 karena a dan b sama

    //lebih dari >
    hasil2 = (a > b);
    std::cout << hasil2 << std::endl; // akan menghasilkan 0 karena a dan b sama

    //kurang dari sama dengan <=
    hasil2 = (a <= b);
    std::cout << hasil2 << std::endl;//akan menghasilkan 1 karena a dan b sama

    //lebih dari sama dengan >=
    hasil2 = (a >= b);
    std::cout << hasil2 << std::endl; // akan menghasilkan 1 karena a dan b sama

    int c = 3;
    int d = 1;
    
    bool hasil3;

    //kurang dari <
    hasil3 = (c < d) ;//akan menghasilakn 0 karena 3 bukan lebih kecil dari 1
    std::cout << hasil3 << std::endl;

    //lebih dari >
    hasil3 = (c > d);
    std::cout << hasil3 << std::endl;//akan menghasilkan 1 karena 3 lebih dari 1


    return 0;
}