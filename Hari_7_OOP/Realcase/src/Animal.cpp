#include "../include/Animal.hpp"
using namespace std;
Animal::Animal(const string& name ) : name(name){}
Animal::~Animal(){
    cout << "Animal destructior " << name << endl;
}
string Animal::getName() const{
    return name;
}
void Animal::showType() const{
    cout << name << "is a general animal." << endl;
}