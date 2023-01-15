#include <iostream>

using namespace std;

union nama{
    int int_value;
    char char_value[4];
};

int main(){
    nama siro;

    siro.int_value = 13463671;

    cout << "data a..: " << siro.int_value << endl;
    cout << "data b..: " << siro.char_value << endl;

    siro.char_value[0] = 'a';
    siro.char_value[1] = 'b';
    siro.char_value[2] = 'c';
    siro.char_value[3] = 'd';

    cout << "data a..: " << siro.int_value << endl;
    cout << "data b..: " << siro.char_value << endl;


    return 0;
}