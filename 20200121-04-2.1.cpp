//Nguyen Long Duong 20200121 - Bai 04 - 2.1

#include<iostream>

using namespace std;

void getReverse(int* p, int n){
    for(int i = n-1; i >= 0; i--){
        cout << p[i] << " ";
    }
}

int main(){
    int arr[100];
    int n;
    cout << "Nhap do dai mang:" << endl;
    cin >> n;
    cout << endl << "Nhap cac phan tu cua mang:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Cac gia tri cua mang theo thu tu dao nguoc la:" << endl;
    getReverse(arr, n);
    return 0;
}