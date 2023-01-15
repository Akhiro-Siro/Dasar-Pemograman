#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBiner(unsigned short val, string nama){
    cout << nama << " = " << bitset<8>(val) << endl;
}


int main(){
    //operator bitwise
    //& and
    //| or
    //^ xor
    //~ not
    //<< shl bits left
    //>> shr bits right

    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << " \n & bitwise AND " << endl;
    c = a & b;
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");
    cout << "c = " << c << endl;

    cout << " \n | bitwise OR " << endl;
    c = a | b;
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");
    cout << "c = " << c << endl;

    cout << " \n ^ bitwise XOR " << endl;
    c = a ^ b;
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");
    cout << "c = " << c << endl;

    cout << " \n ~ bitwise NOT " << endl;
    c = ~a;
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");
    cout << "c = " << c << endl;

    cout << " \n << bitwise SHL " << endl;//menggeser ke kiri jika lewat maka akan di pindah
    c = a << 1;
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");
    cout << "c = " << c << endl;

    cout << " \n >> bitwise SHR " << endl;//menggeser ke kiri jika lewat maka akan di pindah
    c = a >> 1;
    printBiner(a, "a");
    printBiner(b, "b");
    printBiner(c, "c");
    cout << "c = " << c << endl;

    
    return 0;
}