#include "../include/Dog.hpp"
using namespace std;
Dog::Dog(const string& name ) : Animal(name){}
Dog::~Dog(){
    cout << "Animal destructior " << name << endl;
}
void Dog::speak() const{
    cout << "nama hewan " << name << "Suara : Woof !!!" << endl;
}
void Dog::showType() const{
    cout << name << "is a Dog." << endl;
}