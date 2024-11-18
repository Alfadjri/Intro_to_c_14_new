#include<iostream>
using namespace std;

int main(){
    char nama[32];
    cout << "Masukan nama anda : ";
    cin.getline(nama,32);
    cout << "Hello selamat datang,"<< nama <<" di program sederhana" << endl;
    return 0;
}