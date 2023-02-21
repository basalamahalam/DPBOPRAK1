<?php
class Operator{//membuat class operator

    public function __construct(){//membuat constructor kosong

    }

    //membuat methode createdata
    public function CreateData($data, $nama = '', $nim = '', $prodi = '', $fakultas = '', $profil = ''){
        if ($data == null) {//jika data kosong
            throw new Exception("Objek data tidak boleh bernilai null");
        }
        // jika tidak set semua
        $data->setNama($nama);
        $data->setNim($nim);
        $data->setProdi($prodi);
        $data->setFakultas($fakultas);
        $data->setProfil($profil);
    }

    //membuat methode readdata
    public function ReadData($data){
        // membuat table header
        echo "<table border='2' cellspacing='0' cellpadding='20'>" .
                "<tr>" .
                "<th>Profil</th>" .
                "<th>NIM</th>" .
                "<th>Nama</th>" .
                "<th>Program Studi</th>" .
                "<th>Fakultas</th>" .
                "</tr>";
        
        // penggunaan foreach data untuk isi table
        foreach ($data as $dt) {
            echo "<tr>" .
            "<td>" . "<img src='" . $dt->getProfil() . "' style='width: 100px;'>" . "</td>" .
            "<td>" . $dt->getNim() . "</td>" .
            "<td>" . $dt->getNama() . "</td>" .
            "<td>" . $dt->getProdi() . "</td>" .
            "<td>" . $dt->getFakultas() . "</td>" .
            "</tr>";
        }
        echo "</table>";
    }
}

?>