// Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

public class Mahasiswa{//pembuatan class Mahasiswa
    //membuat property private
    private String nama;
    private String nim;
    private String prodi;
    private String fakultas;

    Mahasiswa(){//konstruktor kosong

    }

    public Mahasiswa(String nama, String nim, String prodi, String fakultas){//membuat konstruktor
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    //membuat setter

    public void setNama(String nama){
        this.nama = nama;
    }

    public void setNim(String nim){
        this.nim = nim;
    }

    public void setProdi(String prodi){
        this.prodi = prodi;
    }

    public void setFakultas(String fakultas){
        this.fakultas = fakultas;
    }

    //membuat getter

    public String getNama(){
        return this.nama;
    }

    public String getNim(){
        return this.nim;
    }

    public String getProdi(){
        return this.prodi;
    }

    public String getFakultas(){
        return this.fakultas;
    }
}