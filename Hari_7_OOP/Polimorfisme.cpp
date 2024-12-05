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
        string getNama() const { // ini encapsulation
            return this->testing + " testing";
        }
        void setNama(string nama_hewan){ // ini encapsulation
            this->testing = nama_hewan;
        }
        // void ini tidak pakek return
        /*
            ex : void sound(){
                cout << "Sound" << endl;
            }
        */
        // tampa void pakek return dan ganti void nya jadi tipe data yang mau di keluarkan
        // ex : string sound(){
            // return "Sound"
        //}
        virtual void sound() const = 0;// ini di sebut abstrak kelas
};

class Dog : public Animal{
    public :
        Dog(string nama_hewan) : Animal(nama_hewan){} 
        void sound() override{
            cout << "Wofff !!!" << endl;
        }
};
class Kucing : public Animal{
    public:
        Kucing(string nama_hewan) : Animal(nama_hewan){};
        void sound() override{
                cout << "Meow !!!" << endl;
        }
};

// ini main class
void makeSound(const Animal& kelas){
    cout << "Nama dari hewan :" << kelas.getNama() << endl;
    kelas.sound();
}

int main(){
    Dog Dog("spike");
    Kucing Dog("Tom");
    makeSound(dog);
    makeSound(cat);
    return 0;
}