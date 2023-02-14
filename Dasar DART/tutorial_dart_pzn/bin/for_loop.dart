void main(List<String> args) {
  /// for di gunkan untuk melakukan perulangan
  //for (init statment; kondisi; post stetment){
  //  baris yang akan di ulang
  //}

  //init statment, kondisi, tidak wajib jadi kita bisa mengosongkannya, contohnya sperti 3 di bawah

  //for tanpa init, kondisi dan post stetment
  // for (;;) {
  //   print('perulnagan tanpa henti');
  // }

  //for dengan kondisi
  var count = 1;
  for (; count <= 10;) {
    print('ini perulangan ke-${count}');
    count++; // ini untuk menambahkan agar perulangan bisa berhenti
  }

  //for dengan init stetment
  for (var count = 1; count <= 10;) {
    print('perulangan 2 ke-${count}');
    count++;
  }

  // for dengan init, kondisi, post
  for (var count = 1; count <= 10; count++) {
    print('ini adalah perulangan ke-${count}');
  }
}
