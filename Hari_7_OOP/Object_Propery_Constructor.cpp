// case hewan


#include<iostream>
using namespace std;

class Animal{ // ini di sebut class animal
    public: // ini di sebut property public yang bisa di pakai orang lain
        string nama = "default"; // ini object 
        Animal(string nama_hewan , int umur_hewan){ // construktor
            this->umur = umur_hewan; // this ini untuk memanggil fariabel yang punya kelass nya
            this->nama = nama_hewan;
        }
        int getUmur(){ // method atau function
            return this->umur;
        }
    private:  // ini di sebut property yang tidak bisa di pakai org lain
        int umur;
        
};

int main(){
    // Animal animal; // ini tampa construktor
    Animal animal("Kucing",12);
    cout << "Siapa nama hewan di bawah ini :" << endl;
    cout << animal.nama << endl;
    cout << "Umur kucing :" << endl;
    cout << animal.getUmur() << endl;
}