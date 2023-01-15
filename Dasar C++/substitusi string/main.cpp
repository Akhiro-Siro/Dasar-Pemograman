#include <iostream>
#include <string>

using namespace std;

int main(){

    string kalimat_1("hari yang cerah enaknya...");
    string kalimat_2("mungkin beli es di warung");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    //swap string
    kalimat_1.swap(kalimat_2);
    cout << "swab string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // replace, mengganti string
    kalimat_2.replace(5,4, "sayang");
    cout << "replace string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    //insert string
    kalimat_2.insert(9, "gak tau ");
    cout << "insert string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;



    return 0;
}