# Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

# pembuatan class Mahasiswa
class Mahasiswa:
    # membuat proerty private
    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""

    # membuat kosntruktor
    def __init__(self, nama, nim, prodi, fakultas):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas
    
    # membuat getter dan setter
    def getNama(self):
        return self.__nama
    
    def setNama(self, nama):
        self.__nama = nama
    
    def getNim(self):
        return self.__nim
    
    def setNim(self, nim):
        self.__nim = nim
    
    def getProdi(self):
        return self.__prodi
    
    def setProdi(self, prodi):
        self.__prodi = prodi

    def getFakultas(self):
        return self.__fakultas
    
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    