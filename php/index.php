<?php
// memasukkan file data mahasiswa dan operator
    require('Mahasiswa.php');
    require('Operator.php');

    $input = new Operator();//membuat class operator

    //proses menginput data
    $data[0] = new Mahasiswa();
    $input->CreateData($data[0], 'Ayam sayur', 123456, 'Ngurus Parkir', 'Indomaret' , './img/img_ayam.jpg');
    $data[1] = new Mahasiswa();
    $input->CreateData($data[1], 'Ayam Goeng', 123356, 'Pemuda Pancasila', 'Hajatan' , './img/img_goeng.jpg');
    $data[2] = new Mahasiswa();
    $input->CreateData($data[2], 'Ayam Bikir', 123256, 'Wakil Presiden', 'Ngilang' , './img/img_bikir.jpg');

    // pemanggilan class read data
    $input->ReadData($data);
?>