void main() {
  /// for in ini di gunakan untuk melakukan perulangan untuk tipe data list, set agar lebih simpel
  var kota = <String>['sampit', 'palangka raya', 'jakarta', 'samuda'];
  var kodePos = <int>{7202, 34432, 3535, 2345};

  // for (var i = 0; i < kota.length; i++) {
  //   print(kota[i]);
  // } // ini cukup ribet dan hanya bisa untuk list

  for (var namaKota in kota) {
    print(namaKota);
  }

  for (var kodePos in kodePos) {
    print(kodePos);
  }
}
