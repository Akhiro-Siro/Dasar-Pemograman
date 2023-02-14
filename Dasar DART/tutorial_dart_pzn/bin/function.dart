///function atau method adalha sebuah fungsi yang bisa di panggil berulang ulang dan akan mengesekusi baris kode yang add di func nya
//method di tulis di luar fungsi main, dan di panggil di fungsi main

//fungsi tanpa pengembalian nilai dan tanpa parameter
void sayHello() {
  print('halo word and siro');
}

//fungsi dengan parameter dan tanpa pengembalian nilia
//#[string? namaIbu] // ini adalah cara membuat parameter yang opsional ini tidak boleh di isi di depan dan harus dalam kurung []
void ucapann(String nama, [String? namaIbu]) {
  print('halo $nama dan halo ibu $namaIbu');
}

//fungsi dengan parameter dan pengembalian nilai
double perKalian(double x, double y) {
  return x * y;
}

void main() {
  sayHello(); // contoh pemanggilan fungsi yang tanpa parameter
  print('ini bukan dari fungsi');
  sayHello();

  ucapann('siro');
  ucapann('akhiro', 'ayu');

  var hasilKali = perKalian(11, 3);
  print(hasilKali);

  hasilKali = perKalian(5, 2);
  print(hasilKali.toInt());
}
