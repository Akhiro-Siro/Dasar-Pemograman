void main() {
  var biodata = <String>{'akhiro'};

  //menambah
  biodata.add('siro');
  biodata.add('siro');
  biodata.add('siro');
  biodata.add('sampit');

  //menghapus
  biodata.remove('sampit');

  print(biodata);

  //mengetahui panjang dari set
  print(biodata.length);
}
