// import library array, inputan dan iterasi
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Iterator;

public class Operator{//membuat class Operator
    // membuat property private
    private String nama;
    private String nim;
    private String prodi;
    private String fakultas;

    Operator(){//membuat konstruktor kosong

    }

    public Operator(String nama, String nim, String prodi, String fakultas){//membuat konstruktor
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    public void CreateData(ArrayList<Mahasiswa> data){//membuat methode CreateData

        //program memasukkan input
        Scanner input = new Scanner(System.in);
        System.out.println("Masukkan Nama: ");
        String nama = input.nextLine();
        System.out.println("Masukkan NIM: ");
        String nim = input.nextLine();
        System.out.println("Masukkan Program Studi: ");
        String prodi = input.nextLine();
        System.out.println("Masukkan Fakultas: ");
        String fakultas = input.nextLine();

        //memasukkan data tersebut kedalam array dengan memanggil methode mahasiswa
        data.add(new Mahasiswa(nama, nim, prodi, fakultas));
        System.out.println("Data Berhasil dimasukkan!\n");
    }

    public static void ReadData(ArrayList<Mahasiswa> data) {//membuat methode Readdata
        int i = 0;//deklarasi integer
        for (Mahasiswa cari : data) {//perulangan for
            if (i == 0) {//jika 0
                System.out.println("Berikut adalah Data yang sudah diinputkan: ");
            }
            //menampilkan isi
            System.out.println("NIM : " + cari.getNim());
            System.out.println("Nama : " + cari.getNama());
            System.out.println("Program Studi : " + cari.getProdi());
            System.out.println("Fakultas : " + cari.getFakultas() + "\n");
            i++;//iterasi
        }
    }

    public static void UpdateData(ArrayList<Mahasiswa> data) {//membuat methode Updatedata
        Scanner input = new Scanner(System.in);//deklarasi scanner
        System.out.println("Masukkan NIM yang akan diubah datanya: ");
        String src = input.nextLine();//meminta inpuran

        int i = 0;
        for (Mahasiswa cari : data) {//perulanga for
            if (src.equals(cari.getNim())) {//jika yang dicari sama dengan pencarian
                System.out.println("\nPilih Data yang akan diubah: \n1. Nama\n2. Program Studi\n3. Fakultas\n");
                int ubah = input.nextInt();//memilih program
                input.nextLine();

                if (ubah == 1) {//jika 1
                    System.out.println("Masukkan Nama: ");
                    String nama = input.nextLine();
                    cari.setNama(nama);
                    System.out.println("Data berhasil diupdate!\n");
                } else if (ubah == 2) {//jika 2
                    System.out.println("Masukkan Program Studi: ");
                    String prodi = input.nextLine();
                    cari.setProdi(prodi);
                    System.out.println("Data berhasil diupdate!\n");
                } else if (ubah == 3) {//jika 3
                    System.out.println("Masukkan Fakultas: ");
                    String fakultas = input.nextLine();
                    cari.setFakultas(fakultas);
                    System.out.println("Data berhasil diupdate!\n");
                } else {//selain itu (5)
                    System.out.println("Baik, Selamat Tinggal~\n");
                }
                i++;//iterasi
            }
            if (i == 0) {//jika 0
                System.out.println("NIM tidak ditemukan\n");
            }
        }
    }

    public static void DeleteData(ArrayList<Mahasiswa> data){//membuat methode Deletedata
        Scanner input = new Scanner(System.in);//deklarasi scanner
        System.out.print("Input Data NIM yang akan dihapus: ");
        String src = input.nextLine();//meminta inputan
        Iterator<Mahasiswa> iterator = data.iterator();//deklarsi iterator
        boolean found = false;//boolean sebaga status
        while (iterator.hasNext()) {//sampai tidak ada data atau next
            Mahasiswa cari = iterator.next();//instansiasi
            if (src.equals(cari.getNim())) {//jika yang dicari sama dengan pencarian
                iterator.remove();//hapusdata
                found = true;//berubah menjadi true
                System.out.println("Data berhasil dihapus!\n");
            }
        }
        if (!found) {//jika tidak ditemukan
            System.out.println("Data yang dicari tidak ada!\n");
        }
    }
}