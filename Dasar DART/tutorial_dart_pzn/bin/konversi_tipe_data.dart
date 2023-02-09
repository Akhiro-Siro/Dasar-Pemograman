void main(List<String> args) {
  //konversi tipe data

  //string angka ke int dan double
  var dataStr = '100';

  var dataInt = int.parse(dataStr);
  var dataDouble = double.parse(dataStr);

  print(dataInt);
  print(dataDouble);

  //angka dari int ke double dan sebaliknya
  var dataInt1 = 17;

  var dataDouble1 = dataInt1.toDouble();
  var dariDataDouble = dataDouble1.toInt();

  print(dataDouble1);
  print(dariDataDouble);

  //dari angka ke string
  var datastr1 = dataInt1.toString();
  print(datastr1);

  //bool ke str
  var inputBool = true;
  var dataStr2 = inputBool.toString();
  print(dataStr2);
}
