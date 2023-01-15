#include <iostream>
#include <string>

using namespace std;

//template<typename T > cara menggunakan template T adalah type namenya
template<typename T>
void print(T data){
    cout << data << endl;
}

template<typename T>
int toint(T data){
    return int(data);
}

template<typename T, typename U>
T max(T a, U b){
    return (a > b) ? a : b;
}


int main(){
    print(10);
    print(5.32);
    print('c');
    print("halo");
    print(toint(10.212));

    cout << max(5, 10.2123) << endl;

    print<int>(10.221);
    cout << max<int, double>(5, 10.2123) << endl;

    return 0;
}