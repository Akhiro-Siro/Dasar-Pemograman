#include <iostream>
#define FOO "foo lama"
//ifdef mengecek foo
#ifdef FOO
    #define TEST_FOO "foo ada"
#else
    #define TEST_FOO "tdk ada foo"
#endif
//ifndef membuat foo jika tidak ada foo
#ifndef FOO
    #define FOO "foo baru"
#endif
//pragma once






using namespace std;

int main (){
cout << TEST_FOO << endl;
cout << FOO << endl;

    return 0;
}