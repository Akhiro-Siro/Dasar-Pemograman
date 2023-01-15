//preprocessing directive

// macro merubah nilai dengan nama
#include <iostream>
#define PI 3.123456 // ini akan otomatis menggantikan setiap PI yang ada
#define BAHASA "indonesia"

//macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B ) ? A:B) //tarnery operator



//akhir dari preprocessing directive
using namespace std;

int main(){
    cout << "nilai pi" << PI << endl;
    cout << "nilai kuadrat " << KUADRAT(5) << endl;
    cout << "nilai ternery " << MAX(5,4) << endl;
    cout << "bahasa ? " << BAHASA << endl;

    #undef BAHASA
    #define BAHASA "inggris"
    cout << "bahasa ? " << BAHASA << endl;




    return 0;
}