#include <iostream>

int main () {

    int a = 3;
    int b = 2;
    bool hasil;

    //operaror logika and or dan not

    //not !
    std::cout << " ini hasil not" << std::endl;
    hasil = !(3 == a); //harus nya 1 atau true di ubah jadi 0 atau false dengan menggunkan tanda !
    std::cout << hasil << std::endl;

    //and && (kolo  kedua hasil true maka hasilnya akan true sedangkan jika salah satunya false maka akan false)
    std::cout << " ini hasil and" << std::endl;
    hasil = ( a == 3) and ( b == 2); //true and true maka true
    std::cout << hasil << std::endl;
    hasil = ( a == 4 ) and ( b == 2);// false and true maka false
    std::cout << hasil << std::endl;
    hasil = ( a == 3 ) && ( b == 3); //true and false maka false
    std::cout << hasil << std::endl;
    hasil = ( a == 4 ) && ( b == 3);//false and false maka false
    std::cout << hasil << std::endl;
    //kesimpulan = kolo and, kedua nilai harus benar / true untuk menghasilkan true

    //not and (bukan sama dengan)
    std::cout << " ini hasil notand" << std::endl;
    hasil = !(( a == 3) and ( b == 2)); //true and true maka true
    std::cout << hasil << std::endl;
    hasil = !(( a == 4 ) and ( b == 2));// false and true maka false
    std::cout << hasil << std::endl;
    hasil = !(( a == 3 ) && ( b == 3)); //true and false maka false
    std::cout << hasil << std::endl;
    hasil = !(( a == 4 ) && ( b == 3));//false and false maka false
    std::cout << hasil << std::endl;
    //kesimpulan = ini kebalikan dari and

    //or ||  (jika or atau maka jika salah satu berniai true maka akan true sedangkan jika keduanya false maka akan flase)
    std::cout << " ini hasil or" << std::endl;
    hasil = ( a == 3) or ( b == 2); //true and true maka true
    std::cout << hasil << std::endl;
    hasil = ( a == 4 ) or ( b == 2);// false and true maka false
    std::cout << hasil << std::endl;
    hasil = ( a == 3 ) || ( b == 3); //true and false maka false
    std::cout << hasil << std::endl;
    hasil = ( a == 4 ) || ( b == 3);//false and false maka false
    std::cout << hasil << std::endl;
    //kesimpulan = kolo or, salah 1 nilai benrnilai true maka akan true

    return 0;
}