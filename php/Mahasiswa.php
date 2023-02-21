<?php
# Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

class Mahasiswa{//membuat class Mahasiswa
    //membuat property private
    private $nama = '',  $nim = '',  $prodi = '', $fakultas = '', $profil = '';

    //membuat constructor
    public function __construct($nama = '', $nim = '', $prodi = '', $fakultas = '', $profil = ''){
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->profil = $profil;
    }

    //membuat setter
    public function setNama($nama){
        $this->nama = $nama;
    }

    public function setNim($nim){
        $this->nim = $nim;
    }

    public function setProdi($prodi){
        $this->prodi = $prodi;
    }

    public function setFakultas($fakultas){
        $this->fakultas = $fakultas;
    }

    public function setProfil($profil){
        $this->profil = $profil;
    }

    //membuat getter

    public function getNama(){
        return $this->nama;
    }

    public function getNim(){
        return $this->nim;
    }

    public function getProdi(){
        return $this->prodi;
    }

    public function getFakultas(){
        return $this->fakultas;
    }
    
    public function getProfil(){
        return $this->profil;
    }

    //membuat destructor
    public function __destruct(){

    }
}
?>