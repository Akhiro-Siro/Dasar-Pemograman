void main() {
  ///elseif adalah kondisi setelah if di jalankan dan menghasilkan nilai false maka akan di cek lagi di else if
  //jumlah else if bisa berapa pun tergantung kondisi yang ada
  var nama = 'siro';

  if (nama == 'akhiro') {
    print('halo ${nama}');
  } else if (nama == 'siro') {
    print('oh halo ${nama}');
  } else {
    print('nama tidak di kenal');
  }
}
