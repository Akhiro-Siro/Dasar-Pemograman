void main() {
  var hasilPerhitunganmap = Map<String, double>();
  var hasilPerhitunganlist = [];
  var hasilPerhitunganset = Set<double>();

  //menghitung luas segitiga
  var alas = 30;
  var tinggi = 50;
  var nilai = 1 / 2;

  var hasil = nilai * alas * tinggi;
  print(hasil);
  hasilPerhitunganmap['luas segitiga'] = nilai;
  hasilPerhitunganlist.add(nilai);
  hasilPerhitunganmap[nilai];

  print(hasilPerhitunganmap);
  print(hasilPerhitunganlist);
  print(hasilPerhitunganset);
}
