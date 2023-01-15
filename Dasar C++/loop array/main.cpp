#include <iostream>

using namespace std;


int main(){
    //loop untuk array di cpp 11 ke atas

    /*
        for(deklarasi variable : array ){
            stetemen
        }
     */

    int arraynilai[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int nilai : arraynilai){
        cout << "addres " << &nilai << " nilainya " << nilai << endl;
        nilai = 1; // tidak akan merubah apa pun
    }

    cout << endl;

    for(int &nilaiRef : arraynilai){
        //manipulasi array dengan menggunakan referensi
        nilaiRef *= 2;
    }

    cout << endl;

    for(int &nilaiRef : arraynilai){//jika mengunakan ref atau & maka akan menampilkan addres sebenarnya dari array
        cout << "addres " << &nilaiRef << " nilainya " << nilaiRef << endl;
    }

    //cara ini juga bisa di lakukan dengan array standar lebery

    return 0;
}