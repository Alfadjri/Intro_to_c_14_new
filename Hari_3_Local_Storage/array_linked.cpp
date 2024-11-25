#include<iostream>
using namespace std;

struct Note{
    int data;
    Note* next;
};
/*
cara baca error 
:7 = line error
:2 = karakter
error: pesan error
 7 | }
      |  ^
      |  ; // yang di sarankan
array_linked.cpp:7:2: error: expected ';' after struct
    7 | }
      |  ^
      |  ;
1 error generated. // jumlah error 
*/


int main(){
    // inisialiasi
    Note* head = nullptr;
    Note* second = nullptr;
    Note* third = nullptr;

    // pangil data baru 
    head = new Note();
    second = new Note();
    third = new Note();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = nullptr;

    Note* masinis = head;

    cout << "Apa saja yang ada di dalam gerbong" << endl;
    while(masinis != nullptr){
        cout << "Data yang ada \t : " << masinis->data << endl;
        cout << "Lokomtif ke \t : " << masinis->next << endl;
        masinis = masinis->next; 
    }
    cout << endl;

    delete head;
    delete second;
    delete third;

    cout << "Apa saja yang ada di dalam gerbong" << endl;
    while(masinis != nullptr){
        cout << "Data yang ada \t : " << masinis->data << endl;
        cout << "Lokomtif ke \t : " << masinis->next << endl;
        masinis = masinis->next; 
    }
    return 0;
}