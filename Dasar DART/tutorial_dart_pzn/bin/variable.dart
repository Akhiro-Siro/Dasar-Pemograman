void main() {
  //penulisan variable
  //tipedata namaVariable = value
  String nama;
  nama = "siro ";
  //atau
  String name = 'saputra';

  // bisa juga menggunkan keyword var, final, const, late, dynamic
  // var namaVariable = value
  // final namaVariable = value

  //var umur; #tidak akan bisa
  var umur = 17;

  //dynamic adalah tipe data yang bisa di ubah mejadi tipe data apapun
  dynamic data = 'data dynamic';
  print(data);
  data = true;
  print(data);

  //maka tidak akan bisa di umbah lagi tipe datanya
  final usia = 20;

  //ini bersifat imutebel atau tidak bisa di rubah sama sekali
  const array1 = [1, 12, 3, 34, 2];

  print(nama + name);
  print(umur);
}
