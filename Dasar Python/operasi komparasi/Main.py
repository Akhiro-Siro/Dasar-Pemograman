# perbandingan
# hasil dari komparsi adalah boolean


'''
1. < lebih kecil
2. > lebih besar
3. <= lebih kecil sama dengan
4. >= lebih besar sama dengan
5. == sama dengan
6. != tidak sama dengan
7. is adalah membandingkan object
8. is not

'''

# untuk nilai yang membandingkan nilainya sama dan ingin true maka kita harus menggunakan <= atau >=


# contoh simpel
a = 6
b = 2

hasil = a > b  # true
print(hasil)

# untuk is jangan di gunakan membandingkan literal angka
print(a is b)

# untuk mengecek addres di python kita bisa menggunkan hex(nama vatiable) atau id(nama variable)


# jika nilai dari variable sama maka otomatis si python akan menggabungkan dia ke addres yang sama sehingga tidak banyak memakan memory

print('id dari a ', hex(id(a)))
print('id dari b ', hex(id(b)))
