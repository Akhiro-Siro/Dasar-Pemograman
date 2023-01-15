#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? a:b;
}

int main(){
    auto a = 12;
    auto b = "siro";
    double c = 10.232;
    float d = 14.5f;
    auto e = max(a,c);
    

    cout << a << " type " << typeid(a).name() << endl;
    cout << b << " type " << typeid(b).name() << endl;
    cout << c << " type " << typeid(c).name() << endl;
    cout << d << " type " << typeid(d).name() << endl;
    cout << e << endl;

    return 0;
}