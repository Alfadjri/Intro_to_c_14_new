#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // write
    // ios::out ini code untuk membaut file baru 
    fstream file ("./write_this_file.txt",ios::out);
    if(!file.is_open()){
        cout << "File tidak dapat di buat !!" << endl;
        return 0;
    }
    // ini cara menambahkan isi file
    file << "ini file rahasia hanya program yang tau\n";
    file.close();
    return 0;
}