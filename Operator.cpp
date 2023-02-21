//memanggil library default c++, file Mahasiswa, string dan list
#include "Mahasiswa.cpp"
#include <bits/stdc++.h>
#include <string>
#include <list>

using namespace std;//mengindikasi bahwa saya menggunakan semua fungsi kelas dan objek terdefinisi di namespace std dalam program ini

class Operator{//membuat class operator
    private://membuat property private
        string nama;
        string nim;
        string prodi;
        string fakultas;

    public://membuat propertu public
        Operator(){//membuat konstruktor
            this->nama = "";
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        // methode createdata
        void CreateData(list<Mahasiswa>* data){
            Mahasiswa memory;//deklarasi class Mahasiswa
            string nama, nim, prodi, fakultas;//deklarasi string
            int i = 0;//deklarasi integer
            
            //meminta inputan nama, nim, prodi, dan fakultas
            cout << "Masukkan Nama: " << endl;
            cin >> nama;
            cout << "Masukkan NIM: " << endl;
            cin >> nim;
            cout << "Masukkan Program Studi: " << endl;
            cin >> prodi;
            cout << "Masukkan Fakultas: " << endl;
            cin >> fakultas;
            
            //memanggil methode insertdata lalu mengisi data tersebut dengan variable yang menampungya
            memory.InsertData(nama, nim, prodi, fakultas);
            data->push_back(memory);

            system("cls");//close program
            cout << "Data berhasil diinputkan!" << endl;//output
        }

        //methode readdata
        void ReadData(list<Mahasiswa> data){
            int i = 0;//deklarasi integer
            for(auto cari : data){//penggunaa for
                if(i == 0){//jika 0
                    cout << "Berikut adalah Data yang sudah diinputkan: " << endl;
                }
                //menampilkan data
                cout << "NIM : " << cari.getNim() << endl;
                cout << "Nama : " << cari.getNama() << endl;
                cout << "Program Studi : " << cari.getProdi() << endl;
                cout << "Fakultas : " << cari.getFakultas() << endl << endl;
                i++;//iterasi
            }
        }

        //metode updatedata
        void UpdateData(list<Mahasiswa>& data){
            cout << "Masukkan NIM yang akan diubah datanya: " << endl;
            string src;//deklarasi string
            cin >> src;//meminta inputan

            int i = 0;//deklarasi integer
            for (auto& cari : data) {//perulangan for sesuai dengan list data
                if (src == cari.getNim()) {//jika yang dicari tertemu
                    cout << "\nPilih Data yang akan diubah: \n1. Nama\n2. Program Studi\n3. Fakultas\n" << endl;
                    int ubah;//deklarasi integer
                    cin >> ubah;//meminta inputan

                    if (ubah == 1) {//jika 1
                        cout << "Masukan Nama: " << endl;
                        string nama;
                        getline(cin, nama);
                        cari.setNama(nama);
                        cout << "Data berhasil diupdate!" << endl;
                    break; // keluar dari loop for setelah data diubah
                    }
                    else if (ubah == 2) {//jika 2
                        cout << "Masukkan Program Studi: " << endl;
                        string prodi;
                        getline(cin, prodi);
                        cari.setProdi(prodi);
                        cout << "Data berhasil diupdate!" << endl;
                        break; // keluar dari loop for setelah data diubah
                    }
                    else if (ubah == 3) {//jika 3
                        cout << "Masukan Fakultas: " << endl;
                        string fakultas;
                        getline(cin, fakultas);
                        cari.setFakultas(fakultas);
                        cout << "Data berhasil diupdate!" << endl;
                        break; // keluar dari loop for setelah data diubah
                    }
                    else {//selain itu 1 2 3
                        cout << "Baik, Selamat Tinggal~\n" << endl;
                        break; // keluar dari loop for setelah input tidak valid
                    }
                i++;//iterasi
                }
            }
            if (i == 0) {//jika tidak ada
                cout << "NIM tidak ditemukan\n" << endl;
            }
        }

        //methode delete data
        void DeleteData(list<Mahasiswa>& data){
            cout << "Input Data NIM yang akan dihapus: " << endl;
            string src;//deklarasi string
            cin >> src;//meminta inputan
            int i = 0;//deklarasi integer
            for (auto it = data.begin(); it != data.end();) {//perulangan for mencari data tapi jangan sampai null
                if (src == it->getNim()) {//jika data yang dicari sama dengan pencarian
                    it = data.erase(it);//data dihapus
                    i++;//iterasi
                    cout << "Data berhasil dihapus!\n" << endl;
                } else {//jika tidak
                    ++it;//iterasi
                }
            }
            if (i == 0) {//jika masih 0
                cout << "Data yang dicari tidak ada!\n" << endl;
            }
        }
};
