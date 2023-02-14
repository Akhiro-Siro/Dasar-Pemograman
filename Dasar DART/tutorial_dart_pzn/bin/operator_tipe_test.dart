void main() {
  //operator type ada tiga
  /**
   * as (Typecest, melakukan konversi tipe data secara paksa)
   * is (true, jika objact sesuai tipe data)
   * is! (true, jika object tidak sesuai tipe data)
   */

  var data = 100;

  dynamic hasil = data is int;
  print(hasil);

  hasil = data != String;
  print(hasil);

  // hasil = data as double;
  // print(hasil);

  // print(data as String); //akan eror
}
