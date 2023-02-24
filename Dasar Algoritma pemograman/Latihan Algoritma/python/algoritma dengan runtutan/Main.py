'''
algoritma runtutan (sequence), adalah instruksi kode yang di jalankan secara
berurutan kode tidak akan di jalaankan jika kode sebelumnya belum di jalankan
'''

#Contoh
## menukarkan dua buah nilai

## dengan menggunakan variable tambahan
gelas_a = 'teh'
gelas_b = 'kopi'

print('sebelum')
print(f'isi gelas a {gelas_a} dan gelas b {gelas_b}')

gelas_c = gelas_a
gelas_a = gelas_b
gelas_b = gelas_c

print('sesudah')
print(f'isi gelas a {gelas_a} dan gelas b {gelas_b}')

## cara unik di python

nilai_a = 'ayam'
nilai_b = 'sapi'

print('nilai awal')
print(f'isi a {nilai_a} isi b {nilai_b}')


nilai_a , nilai_b = nilai_b, nilai_a

print('nilai akhir')
print(f'isi a {nilai_a} isi b {nilai_b}')