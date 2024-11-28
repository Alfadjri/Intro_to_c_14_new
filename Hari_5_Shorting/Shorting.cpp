#include<iostream>
using namespace std;

void generateRandomArray(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        arr[i] =  rand() % 100 +1;
    }
};

void print_format(string pesan , int arr[], int n){
    cout << pesan << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// bobble short
// cara shorting atau jenis shorting
void bobbleShort(int arr[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void selectionShort(int arr[],int n){
    for(int i = 0 ; i < n -1 ; i++){
        int Index = 1;
        for (int j = i + 1 ; j < n  ; j++){
            if (arr[j] > arr[Index]){
                Index = j;
            }
        }
        int temp = arr[Index];
        arr[Index] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout << "Masukan jumlah data yang anda inginkan : ";
    cin >> n;
    int arr[n];
    generateRandomArray(arr,n);
    print_format("Array sebelum di susun", arr , n);
    // bobbleShort(arr,n);
    // selectionShort(arr,n);
    print_format("Array setelah di susun (ASE)", arr , n);
    return 0;
}