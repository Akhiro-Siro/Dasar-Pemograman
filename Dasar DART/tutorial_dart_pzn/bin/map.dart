void main() {
  ///map adalah sama sperti list hanya saja kita menentukan key dan valuenya
  //map<tipeKey, tipeVariable> namaVariable = {}
  //var namaVariable = map<tipeKey, tipeValue>()
  //var namaVariable = <tipeKey, tipeValue>{}

  //membuat map
  Map<int, String> absen = {};
  var hobiPerorang = Map<String, String>();
  var rataNilai = <String, int>{};

  print(absen);
  print(hobiPerorang);
  print(rataNilai);

  //mengisi data di map secara langsung
  rataNilai = <String, int>{'siro': 70, 'ambo': 60};
  print(rataNilai);
}
