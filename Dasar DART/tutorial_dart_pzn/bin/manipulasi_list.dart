void main() {
  // ini adalah cara untuk manipulasi list

  var data = <String>[];

  //menambah data
  data.add('siro');
  print(data);

  //mengakses data dari index
  print(data[0]);

  //mengubah data
  data[0] = 'Akhiro';
  print(data);

  //mengecek panjang dari list
  print(data.length);

  //menghapus data di list
  data.removeAt(0);
  print(data);
}
