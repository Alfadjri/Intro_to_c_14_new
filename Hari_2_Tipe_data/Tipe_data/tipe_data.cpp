#include<iostream>
using namespace std;

int main(){
    // tipe data primitf
    // Numberic (bilangan bulat)
    
    int integerNumber = 32768; 
    short shortNumber = 9999;
    long longNumber = 123456789;
    long long verylongnumber = 9876543210;
    
    cout << "Tipe data intenger : " << integerNumber << endl;
    cout << "Tipe data short : " << shortNumber << endl;
    cout << "Tipe data long : " << longNumber << endl;
    cout << "Tipe data long long : " << verylongnumber << endl;

    // Tipe data desimal
    float floatNumber = 3.14f;
    double doubleNumber = 2.718828;
    long double longDobuleNumber = 1.6180339887;

    cout << "Tipe data float : " << floatNumber << endl;
    cout << "Tipe data double : " << doubleNumber << endl;
    cout << "Tipe data long double : " << longDobuleNumber << endl;

    // karakter
    char karakter = 'A';
    cout << "Tipe data Karakter : " << karakter << endl;

    // tipe data bool
    // isi nya cuman true (1) sama false (0)
    bool boolean = 1;
    cout << "Tipe data boolean tampa boolalpha : "<< boolean << endl;
    cout << "Tipe data boolean : " << boolalpha << boolean << endl;
    
    // non primitf
    char nama[255] = "alfadjri dwi Fadhilah";
    cout << "Tipe data char non primitif : " << nama << endl; 
    string nama_string = "Alfadjri Dwi fadhilah";
    cout << "Tipe data string : " << nama_string << endl;
    return 0;
}