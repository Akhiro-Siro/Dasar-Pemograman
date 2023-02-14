import 'package:test/test.dart';

void main() {
  ///ternery operator adalah sama seperti if hanya saja lebih singkat dan hanya bisa melakukan perbandingan
  //var namaVariable = kondisi ? jikaTrue : jikaFalse

  var age = 17;
  var status;

  if (age > 16) {
    status = 'anda bisa masuk';
  } else {
    status = 'umur anda tidak cukup';
  }
  print(status);

  //jika menggunkan ternery operator
  var umur = 12;
  String ucapan = umur >= 17 ? 'anda bisa masuk' : 'umur anda tidak mencukupi';
  print(ucapan);
}
