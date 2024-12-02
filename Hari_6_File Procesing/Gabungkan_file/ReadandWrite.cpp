#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file ("./database_lokal.txt", ios::out | ios::in );
    if(!file.is_open()){
        cout << "File tidak bisa di buat atau gagal dalam build" << endl;
        return 0;
    }
    // buat file
    file << "Nama : Alfadjri" << endl;
    string line;
    cout << "Isi dari file yang akan kita buat" << endl;
    while(getline(file,line)){
        cout << line << endl;
    }
    return 0;
}