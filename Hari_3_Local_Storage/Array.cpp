#include<iostream>
using namespace std;

void print_data(string pesan , int data_value[5]){
    cout << pesan << endl;
    for(int i = 0 ; i < 5 ; i++){
        cout << "Value index of-" << i << " : " << data_value[i] << endl;
    }
}

int main(){
    // inisialisasi
    // const = final = mutlak
    // note
    // hitungan itu mulai dari 0 
    // contoh 10 = 0,1,2,3,4,5,6,7,8,9
    const int size = 5;
    int number[size] = {1,3,2,4,5};
    print_data("value baru di inisialisasi : ",number);

    // update
    number[4] = 10;
    print_data("value setelah di update no - 5 :", number);

    // delete
    // tidak bisa dihapus tapi bisa di kosongkan
    number[size + 1] = 0;
     print_data("value setelah di delete no - 4 :", number);

    return 0;
}