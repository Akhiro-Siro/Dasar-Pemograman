# untuk mengambil input kita bisa gunakan input("masukan kata kata")
dataInput = input("masukan data : ")
print("data yang anda masukan : ", dataInput)
print(dataInput, 'berType ', type(dataInput))
# ini akan otomastis mejadi string untuk mengubah tipe data input mejadi
# tipe data lain kita bisa melakukan cesting
dataInt = int(dataInput)
print(dataInput, 'akan menjadi int : ', type(dataInt))
# tapi akan menjadi bag jika tipe data yang di masukan tidak bisa di cesting
