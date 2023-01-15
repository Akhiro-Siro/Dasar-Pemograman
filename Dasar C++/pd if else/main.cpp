#include <iostream>

#define ID 0
#if ID == 1
    #define LENG "indonesia"
#else
    #define LENG "inggris"
#endif



using namespace std;

int main(){
    cout << "bahsa yang di pilih... " << LENG << endl;


    return 0;
}