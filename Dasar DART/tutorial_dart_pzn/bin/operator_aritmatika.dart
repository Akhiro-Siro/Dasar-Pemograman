void main(List<String> args) {
  ///operator matematika yang bisa di lakukan
  /**
   * tambah = + 
   * pengurangan = - (untuk negatif juga bisa)
   * perkalian = *
   * pembagian = / (hasil double)
   * pembagian = ~/ (hasil int)
   * sisa bagi = %
   */

  var data1 = 100;
  var data2 = 30;

  print('data awal ${data1} dan ${data2}');

  //pertambahan
  print('===pertambahan');
  dynamic hasil = data1 + data2;
  print(hasil);

  print('===pengurangan');
  hasil = data1 - data2;
  print(hasil);

  print('===perkalian');
  hasil = data1 * data2;
  print(hasil);

  print('===pembagian(hasil = double)');
  hasil = data1 / data2;
  print(hasil);

  print('===pembagian(hasil = int)');
  hasil = data1 ~/ data2;
  print(hasil);

  print('===hasil bagi (modulus)');
  hasil = data1 % data2;
  print(hasil);
}
