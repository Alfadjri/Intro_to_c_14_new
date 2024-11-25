#include<iostream>
#include<unordered_map> // pakage
using namespace std;

// function 
// ada 2 tipe
// tipe void non mengeluarkan hasil
void format_print(string pesan , unordered_map<string,int> hash_map){
    cout << pesan << endl;
    cout << "|key|\tvalue\t|" << endl; // \t 
    for(const auto& value : hash_map){
        cout << "|" << value.first << "|\t" << value.second << "\t|" << endl;
    }
}
// yang bertipe data bisanya ciri" ada return di akhir funciton
// format
// tipe data yang mau di keluarkan namaFunction(paramter)
int tambah(int a , int b){
    return a+b;
}

int main(){
    // inisilaisasi 
    unordered_map<string , int> hash_map;

    // add atau create
    hash_map["One"] = 1;
    hash_map["Tree"] = 3;
    hash_map["Two"] = 2;
    format_print("Elament yang ada di hash map : ", hash_map);

    // update
    hash_map["Tree"] = 10;
    format_print("Element yang sudah di update : ", hash_map);

    // delete
    hash_map.erase("Tree");
    format_print("Element yang sudah di update : ", hash_map);

    

    return 0;
}