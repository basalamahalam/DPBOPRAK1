// Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

//libary default dan string
#include <bits/stdc++.h>
#include <string>

using namespace std;//mengindikasi bahwa saya menggunakan semua fungsi kelas dan objek terdefinisi di namespace std dalam program ini

class Mahasiswa{//pembuatan class Mahasiswa 
    private://membuat property private
        string nama;
        string nim;
        string prodi;
        string fakultas;
    
    public://membuat property public
        Mahasiswa(){//membuat konstruktor
            this->nama = "";
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        //methode insertdata keseluruhan
        void InsertData(string nama, string nim, string prodi, string fakultas){
            this->nama = nama;
            this->nim = nim;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }
        
        //membuat getter

        string getNama(){
            return this->nama;
        }

        string getNim(){
            return this->nim;
        }

        string getProdi(){
            return this->prodi;
        }

        string getFakultas(){
            return this->fakultas;
        }

        //membuat setter

        void setNama(string nama){
            this->nama = nama;
        }

        void setNim(string nim){
            this->nim = nim;
        }

        void setProdi(string prodi){
            this->prodi = prodi;
        }

        void setFakultas(string fakultas){
            this->fakultas = fakultas;
        }

        ~Mahasiswa(){//membuat destruktor
            
        }
};