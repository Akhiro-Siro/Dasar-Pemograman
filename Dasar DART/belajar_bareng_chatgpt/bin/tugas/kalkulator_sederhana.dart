import 'dart:io';

void main() {
  //meminta input
  try {
    print('masukan nilai pertama\t: ');
    var num1 = double.parse(stdin.readLineSync()!);
    print('masukan nilai kedua\t: ');
    var num2 = double.parse(stdin.readLineSync()!);

    //operasi matematika
    var tambah = num1 + num2;
    var kurang = num1 - num2;
    var kali = num1 * num2;
    var bagi = num1 / num2;

    //mencetak hasil
    print('hasil pertambahan $tambah');
    print('hasil pengurangan $kurang');
    print('hasil perkalian $kali');
    print('hasil pembagian $bagi');
  } catch (e) {
    print('err boss $e');
  }
}
