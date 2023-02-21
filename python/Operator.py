# memanggil class Mahasiswa dari file Mahasiswa dan memasukkan library os
from Mahasiswa import Mahasiswa
import os

# pembuatan class operator
class Operator:
    # membuat property private
    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""

    # membuat konstruktor
    def __init__(self, nama, nim, prodi, fakultas):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas
    
    # membuat CreateData
    def CreateData(Data):
        # meminta masukkan
        print("Masukan Nama: ")
        nama = str(input())
        print("Masukan NIM: ")
        nim = str(input())
        print("Masukan Program Studi: ")
        prodi = str(input())
        print("Masukan Fakultas: ")
        fakultas = str(input())

        # menambahkan data kedalam list dengan append dari class Mahasiswa
        Data.append(Mahasiswa(nama, nim, prodi, fakultas))
        os.system('cls')
        print("Data Berhasil dimasukkan!")
    
    # membuat ReadData
    def ReadData(Data):
        i = 0
        # perulangan for
        for cari in Data:
            # jika 0
            if(i == 0):
                print('Berikut adalah Data yang sudah diinputkan: ')
            # menampilkan data
            print("NIM : ", cari.getNim())
            print("Nama : ", cari.getNama())
            print("Program Studi : ", cari.getProdi())
            print("Fakultas : ", cari.getFakultas(), "\n")
            # iterasi
            i += 1
        
    # membuat updatedata
    def UpdateData(Data):
        # meminta masukkan
        print("Masukkan NIM yang akan diubah datanya: ")
        src = str(input())
        
        i = 0
        # perulangan for
        for cari in Data:
            # jika yang dicari sama dengan pencarian
            if(src == cari.getNim()):
                print("\nPilih Data yang akan diubah: \n1. Nama\n2. Program Studi\n3. Fakultas\n")
                ubah = int(input())
                # jika 1
                if(ubah == 1):
                    print("Masukan Nama: ")
                    nama = str(input())
                    cari.setNama(nama)
                    # print("Data berhasil diupdate!")
                # jika 2
                elif(ubah == 2):
                    print("Masukkan Program Studi: ")
                    prodi = str(input())
                    cari.setProdi(prodi)
                # jika 3
                elif(ubah == 3):
                    print("Masukan Fakultas: ")
                    fakultas = str(input())
                    cari.setFakultas(fakultas)
                    # jika selain itu
                else :
                    print("Baik, Selamat Tinggal~\n")
                i+=1
            # jika 0
            if(i == 0) :
                print("NIM tidak ditemukan\n")
    
    # membuat methode delete
    def DeleteData(Data):
        # meminta input
        print("Input Data NIM yang akan dihapus: ")
        src = str(input())
        i = 0
        # perulangan for
        for cari in Data:
            # jika yang dicari sama dengan pencarian
            if(src == cari.getNim()):
                # hapus data
                Data.remove(cari)
                i += 1
                os.system('cls')
                print("Data berhasil dihapus!\n")
            # jika 0
            if(i == 0):
                os.system('cls')
                print("Data yang dicari tidak ada!\n")