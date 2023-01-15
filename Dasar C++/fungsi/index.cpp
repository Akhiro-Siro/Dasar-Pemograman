#include <iostream>
#include <cmath> //standart lebery untuk matematika
    /*
    libry cmath : refernsi www.cppreference.com
    celi (x)     <= pembulatan ke atas
    cos (x)      <= cosinus
    exp (x)      <= eksponen
    fabs (x)     <= nilai absolute dalam float
    floor (x)    <= pembulatan ke bawah
    fmod (x)     <= modulus dalam float
    log (x)      <= logaritma dengan basis natural
    log10 (x)    <= logaritma dengan basis 10
    pow (x)      <= x pangkat y
    sin (x)      <= sinus
    sqrt (x)     <= akar kuadrat
    tan (x)      <= tangen
    */


using namespace std;

int main(){

    int x;
    cout << "menghitung nilai dari x: ";
    cin >> x;

    double a = sqrt (x);
    cout << "akarnya adalah :" << a << endl;

    double b = exp (x);
    cout << "exponen x adalah : " << b << endl;

    float c = cos (x);
    cout << " cos dari x adalah: " << c << endl;




    return 0;
}