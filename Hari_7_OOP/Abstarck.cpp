#include<iostream>
using namespace std;

class Animal{
    public:
    // virtual sementara 
    // virtual function : fungsi sementara yang gak tau bentuknya
    virtual void getSound() const = 0; // abstrak class
};
class Kucing : public Animal{
    public : 
    void getSound() const override{ // abstarck class overrider
        cout << "Meow !!!" << endl;
    }
};

int main(){
    Kucing kucing;
    cout << "method sound :" << endl;
    kucing.getSound();
    return 0;
}