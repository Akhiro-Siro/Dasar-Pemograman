void main() {
  // membuat variable dengan tipe data
  int x = 10;
  double y = 3.14;
  String z = 'Akhiro Siro';

  //mencetak hasil variable yang di buat
  print(x);
  print(y);
  print(z);

  //mengubah variable yang sudah di buat
  x = 20;
  y = 30.2;
  z = 'Siro';

  //mencetak variable yang sudah di ubah
  print(x);
  print(y);
  print(z);

  //tugas!!!
  /**
   * Berikan contoh penggunaan tipe data array dalam bahasa pemrograman yang kamu kuasai.
   * Berikan penjelasan tentang penggunaan tipe data ini dan keuntungannya dalam pengembangan program.
   */

  /**
   * tipe data array adalah tipe data yang bisa menyimpan banyak data dalam satu variable dalam dart
   * tipe data array hanya bisa menyimpan satu jenis tipe data di dalamnya dan array itu memiliki
   * index atau urutan penomoran untuk kita bisa mengaksesnya dan index itu selalu di muali
   * dari 0 atau pajang array -1
   * 
   * keuntungan menggunakan array atau list(di dart):
   * mudah untuk mengakses data dalam jumalah besar
   * mengemat memori karena hanya di simpan dalam satu variable
   * dan mudah untuk di manupulasi, seperti di ubah, di hapus
   */

  //contoh array di dart
  List<int> array = [1, 3, 4, 2, 5, 10];

  //mengakses
  print(array);
  print(array[0]);
  print(array[5]);

  //mengubah data
  array[1] = 10;

  //mencetak nilai yang di ubah
  print(array);
  print(array[1]);

  //mengecek pajang array
  print(array.length);
}
