# latihan membuat kalkulator konversi suhu

print('\n===KONVERSI SUHU DARI CELCIUS===\n')

celcius = float(input("masukan besarna suhu dalam celcius : "))
print('suhu yang anda masukkan : ', celcius, 'C')

# reamur
reamur = (4/5) * celcius
print('suhu dalam reamur adalah : ', reamur, 'R')

# fahrenhite
fahrenhite = ((9/5) * celcius) + 32
print('suhu dalam fahrenhite adalah : ', reamur, 'F')

# kelvin
kelvin = celcius + 273
print('suhu dalam kelvin adalah : ', kelvin, 'K')
