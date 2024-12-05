#include<iostream>
using namespace std;
class Animal{
    private :  // ini di sebut encapsulation
        string testing;  // ini di sebut encapsulation
    public :
        Animal(string nama_hewan){
            this->testing = nama_hewan;
        }
        // teknik seter and geter
        // cara memanggil atau merubah nilai
        string getNama(){ // ini encapsulation
            return this->testing + " testing";
        }
        void setNama(string nama_hewan){ // ini encapsulation
            this->testing = nama_hewan;
        }
};

class Kucing : public Animal {
    private:
        int kaki;
    public:
        // super class 
        // super class ini simpelnya tehnik memanggil constructor peret class
        // construktor mainClass(paramter sesuaikand dengan perent , susiakan dengan object class) : construktor_perent(value need assing)
        Kucing(string nama_hewan ,int kaki_kucing) : Animal(nama_hewan) {
            this->kaki = kaki_kucing;
        }
};
int main(){
    Kucing kucing("Tom",4);
    cout << "Nama hewan :" << kucing.getNama() << endl;
    return 0;
}