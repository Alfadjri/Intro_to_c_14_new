#include<iostream>
#include<map> // ini lib atau pakage
using namespace std;

int main(){
    // inisilasiasi
    map<string,string> makanan;

    // isi atau create
    makanan["2"] = "Roti";
    makanan["0"] = "Pasta";
    makanan["1"] = "Nasi";
    makanan["3"] = "Nasi pandang";

    // cetak semua nilai read
    // foreach // read untuk semua nilai
    cout << "Data tree map" << endl;
    cout << "|key|\t value\t|" << endl;
    for(const auto& value : makanan){
        cout << "|" << value.first << "|\t" << value.second << "\t|\t" <<endl;
    }
    // 1 buah saja
    //
    cout << "Value index ke 3 :" << makanan["3"] << endl;
    // update
    makanan["3"] = "Nasi Ayam"; // update
    cout << "Data tree map" << endl;
    cout << "|key|\t value\t|" << endl;
    for(const auto& value : makanan){
        cout << "|" << value.first << "|\t" << value.second << "\t|\t" <<endl;
    }
    // delete
    // erese
    makanan.erase("3");
    cout << "Data tree map" << endl;
    cout << "|key|\t value\t|" << endl;
    for(const auto& value : makanan){
        cout << "|" << value.first << "|\t" << value.second << "\t|\t" <<endl;
    }
    return 0;
}