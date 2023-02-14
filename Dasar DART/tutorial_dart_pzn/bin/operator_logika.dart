void main() {
  /// operator logika angkan menghasilkan nilai boolean dan di gunakn untuk membandingkan dua buah nilai boolean
  //operator logka di dart ada 3
  /**
   * && (and, dan)
   * || (or, atau)
   * ! (kebalikan)
   */

  var nilaiAkhir = 80;
  var nilaiAbsen = 85;

  var nilaiAkhirBagus = nilaiAkhir >= 80;
  var nilaiAbsenBagus = nilaiAbsen >= 75;

  var lulus = nilaiAkhirBagus && nilaiAbsenBagus;
  print(lulus);

  lulus = nilaiAkhirBagus || nilaiAbsenBagus;
  print(lulus);

  lulus = !nilaiAbsenBagus;
  print(lulus);
}
