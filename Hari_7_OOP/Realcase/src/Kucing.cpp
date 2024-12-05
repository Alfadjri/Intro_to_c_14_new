#include "../include/Kucing.hpp"
using namespace std;
Kucing::Kucing(const string& name ) : Animal(name){}
Kucing::~Kucing(){
    cout << "Animal destructior " << name << endl;
}
void Kucing::speak() const{
    cout << "nama hewan " << name << "Suara : Meow !!!" << endl;
}
void Kucing::showType() const{
    cout << name << "is a Kucing." << endl;
}