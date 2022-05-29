// Nguyen Long Duong 20200121 - Bai 04 - 1.1

#include<iostream>

using namespace std;

bool isK(int* p, int n, int k){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(p[i] != k){
            count++;
        }
        else break;
    }
    if(count < n) return true;
    else return false;
}

int getMax(int* p, int n){
    int max = p[0];
    for(int i = 0; i < n; i++){
        if(p[i] > max) max = p[i];
    }
    return max;
}

int getMin(int* p, int n){
    int min = p[0];
    for(int i = 0; i < n; i++){
        if(p[i] < min) min = p[i];
    }
    return min;
}

int main(){
    int arr[100];
    int n;
    int k;
    cout << "Nhap do dai mang: " << endl;
    cin >> n;
    cout << "Nhap so k can tim: " << endl;
    cin >> k;
    cout << "Nhap phan tu cua mang: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Mang chua phan tu gia tri k khong? " << isK(arr, n, k) << endl;
    cout << "Gia tri lon nhat trong mang la: " << getMax(arr, n) << endl;
    cout << "Gia tri nho nhat trong mang la: " << getMin(arr, n) << endl;
    return 0;
}