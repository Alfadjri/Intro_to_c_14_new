#include<iostream>
using namespace std;
int main(){
    // nilainya menghasilkan true atau false
    bool a = true;
    bool b = false;
    bool hasil;
    // operator and &&
    // kedua sisi harus berbilai true 
    // kalau tidak nilainya false
    hasil = (a && b);
    cout << "Hasil " << boolalpha << a << " Ketemu dengan " << boolalpha << b << " dengan simbol and(&&) adalah " << boolalpha << hasil << endl;
    // or (||)
    hasil = (a || b);
    cout << "Hasil " << boolalpha << a << " Ketemu dengan " << boolalpha << b << " dengan simbol or(||) adalah " << boolalpha << hasil << endl;
    // ! (kebalikan) not
    hasil = (!a);
    cout << "Hasil " << boolalpha << a << " Ketemu dengan simbol not(!) adalah " << boolalpha << hasil << endl;

    int c= 10;
    int d= 10;
    hasil = (c > d);
    cout << "Apakah nilai dari " << c << " lebih besar dari (>) nilai " << d <<  " adalah " << boolalpha << hasil << endl;
    hasil = (c < d);
    cout << "Apakah nilai dari " << c << " lebih kecil dari (<) nilai " << d <<  " adalah " << boolalpha << hasil << endl;
    hasil = (c == d);
    cout << "Apakah nilai dari " << c << " sama dengan (==) nilai " << d <<  " adalah " << boolalpha << hasil << endl;
    hasil = (c >= d);
    cout << "Apakah nilai dari " << c << " lebih besar dari sama dengan (>=) nilai " << d <<  " adalah " << boolalpha << hasil << endl;
    hasil = (c <= d);
    cout << "Apakah nilai dari " << c << " lebih kecil dari sama dengan (<=) nilai " << d <<  " adalah " << boolalpha << hasil << endl;
    return 0;
}