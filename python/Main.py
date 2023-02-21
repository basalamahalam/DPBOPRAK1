# memanggil class Operator dari file Operator
from Operator import Operator

# deklarasi array
Data = []
n = 0

# while jika lebih 5 berhenti
while(n < 5) :
    # meminta input
    print("Selamat Datang di Program ABAL ABAL\nSilahkan Pilih:\n1. Menambahkan Data\n2. Merubah Data\n3. Menghapus Data\n4. Melihat Data\n5. Cancel\n")
    n = int(input())

    # memanggil program methode sesuai inputan
    if(n == 1):
        Operator.CreateData(Data)
    elif(n == 2):
        Operator.UpdateData(Data)
    elif(n == 3):
        Operator.DeleteData(Data)
    elif(n == 4):
        Operator.ReadData(Data)