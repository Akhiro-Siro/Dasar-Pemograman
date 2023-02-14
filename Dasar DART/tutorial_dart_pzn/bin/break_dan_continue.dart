void main() {
  ///break adalah kata kunci yang bisa di gunak untuk menghentikan perulnagna di while

  // while(true) ini akan menghasilkan perulangann tanpa henti
  var count = 1;
  while (true) {
    print('perulangan ke-$count');
    count++;
    if (count > 10) {
      break;
    }
  }

  for (var counter = 1; counter <= 100; counter++) {
    if (counter % 2 == 0) {
      continue;
    }
    print('nilai yang ganjil = $counter');
  }

  for (var counter = 1; counter <= 100; counter++) {
    if (counter % 2 != 0) {
      continue;
    }
    print('nilai yang genap = $counter');
  }
}
