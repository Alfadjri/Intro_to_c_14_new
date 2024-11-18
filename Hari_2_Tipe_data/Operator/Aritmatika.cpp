#include<iostream>
using namespace std;

int main(){
    // int x = 3;
    // int y = 2;
    // int hasil;
    int x = 3 , y = 2 , hasil;
    float hasil_float;

    // penjumlahan
    hasil = x + y;
    cout << "Hasil tambah dari " << x << " + " << y << " = " << hasil << endl;
    // pengurangan
    hasil = x - y;
    cout << "Hasil tambah dari " << x << " - " << y << " = " << hasil << endl;
    // perkailan
    hasil = x * y;
    cout << "Hasil tambah dari " << x << " * " << y << " = " << hasil << endl;
    // pembagian
    hasil = x / y;
    cout << "Hasil tambah dari " << x << " / " << y << " = " << hasil << endl;
    hasil_float = 3.0 / 2.0;
    cout << "Hasil tambah dari " << 3.0 << " / " << 2.0 << " = " << hasil_float << endl;
    // modulus (sisi dari pembagian)
    hasil = x % y;
    cout << "Hasil tambah dari " << x << " % " << y << " = " << hasil << endl;
    return 0;
}