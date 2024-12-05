#ifndef Kucing_HPP
#define Kucing_HPP

#include "Animal.hpp"
using namespace std;

class Kucing : public Animal{
    public:
    Kucing(const string& nama_kucing);
    ~Kucing();
    void speak() const override;
    void showType() const override;
};

#endif