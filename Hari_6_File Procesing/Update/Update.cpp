#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ios :: app ini code untuk melakukan update pada file atau append pada file
    fstream file("../Write/write_this_file.txt",ios::app);
    if(!file.is_open()){
        cout << "file tidak di temukan" << endl;
        return 0;
    }
    file << "ini baru saja di update 1\n";
    file.close();
    return 0;
}