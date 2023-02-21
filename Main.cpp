//memanggil library default c++ dan file operator
#include <bits/stdc++.h>
#include "Operator.cpp"

using namespace std;//mengindikasi bahwa saya menggunakan semua fungsi kelas dan objek terdefinisi di namespace std dalam program ini

int main(){
    list<Mahasiswa> data;//deklarasi list
    Operator opr;//deklarasi class operator
    int n = 0;

    while(n < 5){//penggunaan while untuk menampilkan menu
        cout << "Selamat Datang di Program ABAL ABAL" << endl;
        cout << "Silahkan Pilih:" << endl;
        cout << "1. Menambahkan Data" << endl;
        cout << "2. Merubah Data" << endl;
        cout << "3. Menghapus Data" << endl;
        cout << "4. Melihat Data" << endl;
        cout << "5. Cancel" << endl;
        cin >> n;//meminta input

        // penggunaan if untuk setiap program menu
        if (n == 1) {
            opr.CreateData(&data);
        }
        else if (n == 2) {
            opr.UpdateData(data);
        }
        else if (n == 3) {
            opr.DeleteData(data);
        }
        else if (n == 4) {
            opr.ReadData(data);
        }
    }

    return 0;
}