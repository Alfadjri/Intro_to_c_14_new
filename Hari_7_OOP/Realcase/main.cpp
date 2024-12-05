#include "./include/Dog.hpp"
#include "./include/Kucing.hpp"

int main(){
    Animal* animals[] = {
        // new itu untuk mereset nilai ata mereset kelas
        new Dog("Spike"),
        new Kucing("Tom")
    };
    for (Animal* animal : animals){
        animal->showType();
        animal->speak();
        delete animal;
    }
    return 0;
}