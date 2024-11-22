#include<iostream>
using namespace std;

int main(){
    // while
    // kondisi di mana di check terlebih dahulu
    cout << "while" << endl;
    int nomer_urut = 10;
    while(nomer_urut != 10){
        cout << "Nomer urut : " << nomer_urut << endl;
        nomer_urut++;
    }
    cout << endl;
    cout << "do" << endl;
    // do 
    // di jalankan dulu baru di check
    int no = 10;
    do{
        cout << "Nomer urut : " << no << endl;
        // no++; // increment untuk nilainya bisa false
    }while(no != 10);

    // for
    cout << endl;
    cout << "for" << endl;
    // for(variabel_sementara ; kondisi ; increment/decerment)
    for(int i = 10 ; i >= 0 ; i--){
        cout << "index ke-" << i << endl;
    }

    string buah[] = {"satu","tiga","dua","lima belas","10"}; // array
    // foreach
    int i = 0;
    // format dasar
    // for (tipeData value per baris : localstorage Atau array) )
    for(string value : buah){
        cout << "indext of " << i <<" : " << value << endl;
        i++;
    } 



    return 0;
}