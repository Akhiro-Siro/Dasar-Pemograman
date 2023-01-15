#include <iostream>

using namespace std;

void printData(int val){
    cout << val << endl;
}


int main(){
    //operator comma (exspression 1, exspresion2)
    int a;
    int b;
    int c;

    // a = (b = 1);
    // c = 2;
    // a = (b=1, cout << b << endl, c=2, cout << c << endl, (b+c) ); comma operator
    a = (b=1,printData(b), c=2, printData(c), (b+c) );
    cout << a << endl;




    return 0;
}