void main() {
  //if adalah pengkondisian dia akan menjalankan kode program nya jika kondisi yang di berikan true
  //else adalah pengkondisian yang jika kondisi di if salah maka else yang akan di jalan kan
  //kondisi akan bernilai boolean

  var nilai = 90;
  var kehadiaran = 75;

  if (nilai >= 80 && kehadiaran >= 60) {
    print('anda lulus');
  } else {
    //tidak akan di jalankan karena kondisi if benar atau true
    print('coba lagi tahun depan');
  }
}
