void main() {
  ///manipulasi map ada bebarapa yaitu:
/**
 * map.length (mendapatkan panjang)
 * map[key] (mendapatkan data)
 * map[key] = value (merubah data)
 * map.remove(key) (menghapus data)
 */

  var rataNilai = <String, int>{'siro': 90, 'andika': 80, 'yuda': 76};

  //menambah data
  rataNilai['jamal'] = 73;
  rataNilai['akhiro'] = 90;

  print(rataNilai);

  //mengecek panjang dari map
  print(rataNilai.length);

  //mendapatkan data dari map
  print(rataNilai['siro']);

  //merubah value
  rataNilai['yuda'] = 90;
  print(rataNilai);

  //menghapus data dari map
  rataNilai.remove('siro');
  print(rataNilai);
}
