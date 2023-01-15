# tipe data yang ada di python
'''
1.integer (int)
2.float (float)
3.string (str)
4.boolean (bool)
'''

# ini contoh pengimport-an
from ctypes import c_double, c_char
#from ctypes import c_char


# ini akan otomatis menjadi integer
dataInteger = 10
print("data ini ", dataInteger, 'bertype ', type(dataInteger))

# ini akan otomatis menjadi float atau bilangan pecahan bila mempunyai .
dataFloat = 10.8
print("data ini ", dataFloat, 'bertype ', type(dataFloat))

# ini akan otomatsi menjadi string kolo memiliki tanda "" atau ''
dataStr = "siro ini str 10"
print("data ini ", dataStr, 'bertype ', type(dataStr))

# ini tipe data bolean atau biner yang akan menghasilakn true atau flase
dataBool = True
print("data ini ", dataBool, 'bertype ', type(dataBool))

# tipe data khusus

# bilangan kompleks
dataCompelx = complex(5, 10)
print("data ini ", dataCompelx, 'bertype ', type(dataCompelx))

# tipe data yang dari bahasa c
# tapi kita harus import dari lebry

dataDouble = c_double(23.3)
print("data ini ", dataDouble, 'bertype ', type(dataDouble))

dataChar = c_char()
print("data ini ", dataChar, 'bertype ', type(dataChar))
