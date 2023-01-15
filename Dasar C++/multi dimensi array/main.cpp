#include <iostream>
using namespace std;

void printArraymd ( int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << endl;
    }
}



int main (){

    // int array [baris] [kolom] = {isi array }

    int array[2] [2] = {0,1,2,3};

    // cout << array[0] [0] << " "<< array[0][1] << endl;
    // cout << array[1][0] << " " << array[1][1] << endl;

    printArraymd(*array, 2 , 2);






    return 0;
}