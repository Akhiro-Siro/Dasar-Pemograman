void main() {
  // di bahasa seri terjadi NullPointerException, ini bisa terjadi karena kita mengakses data yang ternyata null
  // dan dart mendukung null safety

  // double? age = null;
  // int intdouble = age.toInt();
  // print(intdouble); // ini akan eror

  // null safety
  double? age = null;
  if (age != null) {
    int intdouble = age.toInt();
    print(intdouble);
  }

  // String? guest;
  // String guestName = guest != null ? guest : 'guest';
  // print(guestName); // ada yang lebih singkat yaitu default value

  //default value
  String? guest;
  String guestName = guest ?? 'guest';
  print(guestName);
}
