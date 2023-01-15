#include <iostream>

int main (){

    for(int i = 0; i <= 10; i++ ){

        if (i == 5){
            //break; //mengntikan program di bawahnya
            continue; //melewatkan program yang masuk ke if
        }

        std::cout << i << std::endl;
    }

    return 0;
}