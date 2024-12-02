#include<iostream>
#include<fstream> // pakage atau lib di mana untuk membuka file
using namespace std;

int main(){
    // read file 
    // harus ada file nya kalau tidak ada program akan error 
    // inisialisasi file apa yang akan di buka
    // note
    // pastikan file sejajar atau 1 folder dengan file yang mau di baca 
    // menggunakan ./
    // kalau di luar folder tersebut mundur sebanyak yang di mau
    // ../namaFile
    // mundur 2 folder
    // ../../
    // ios::in ini untuk membaca file
    ifstream file ("./contoh_bacas_file.txt",ios::in);
    // is_open() ini return nya hanya true atau false
    // code ribet
    // if(file.is_open()){
    //     // kalau misalnya bisa di buka
    //     string line;
    //     cout << "isi dari file yang di baca : " << endl;
    //     while(getline(file,line)){
    //         cout << line << endl;
    //     }
    //     file.close(); // ini untuk menutup file yang sudah di baca
    // }else{
    //     cout << "File yang anda maksud tidak di temukan !" << endl;
    // }
    // clean code 
    // note 
    // ! artinya kebalikan dari kondisi yang ada 
    if(!file.is_open()){
        cout << "File yang anda maksud tidak di temukan !" << endl;
        return 0;
    }
    string line;
    cout << "isi dari file yang di baca : " << endl;
    while(getline(file,line)){
        cout << line << endl;
    }
    file.close(); // ini untuk menutup file yang sudah di baca
    return 0;
}