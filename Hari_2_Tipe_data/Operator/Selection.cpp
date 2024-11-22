#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 5;
    // if 
    // format dasar
    // if(kondisi){
    // apa yang kamu mau lakukan kalau benar nilainya
    // }
    cout << "ini If kondisi" << endl;
    if (a > b){
        cout << "Nilai " << a << " lebih besar dari " << b << endl;
    }
    // if else
    cout << "If Else kondisi " << endl;
    a = 5;
    b = 10;
    if (a > b){
        cout << "Nilai " << a << " lebih besar dari " << b << endl;
    }else{
        cout << "Nilainya salah" << endl;
    }
    // if else if else
    cout << "If else if Else kondisi " << endl;
    // misal 
    // nilai sisiwa 95
    // dengan takaran 95 > A+  80 <= 95 = B 
    if (a > b){
        cout << "Nilai " << a << " lebih besar dari " << b << endl;
    }else if((a > 2) && (a <= 5)) {
        cout << "nilai " << a << " kurang dari 5" << endl;
    }else{
        cout << "Nilainya salah" << endl;
    }
    // menu
    // tipe data nya sama 
    // switch case 
    char nilai = 'A';
    switch(nilai){
        case 'A':
            cout << "Selamat kamu lulus dengan nilai sempurna" << endl;
        break;
        case 'B':
            cout << "Selamat kamu lulus tingkatkan pengetahuan" << endl;
        break;
        default:
            cout << "Kamu tidak lulus" << endl;
        break;
    }
    cout << "Tulisan ini akan muncul jika continue" ;
    return 0;
}