// Nguyen Long Duong 20200121 - Bai 04 - 1.2

#include<iostream>

using namespace std;

/* Su dung tim kiem nhi phan
tim kiem 1 gia tri trong mang da duoc sap xep theo thu tu tang dan
(Neu co ket qua tra ve vi tri cua phan tu mang gia tri do)
*/

int getK(int* p, int n, int k){
    int a = 0; int b = n-1;
    int mid;
    while(a <= b){
        mid = (a+b)/2;
        if(p[mid] == k){
            return mid;
            break;
        }
        if(p[mid] > k) {b = mid - 1;}
        if(p[mid] < k) {a = mid + 1;} 
    }
    return -1;
}

int main(){
    int arr[100];
    int n;
    int k;
    cout << "Nhap do dai mang: ";
    cin >> n;
    cout << "Gia tri k can tim la: ";
    cin >> k;
    cout << "Nhap phan tu mang: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Vi tri phan tu co gia tri " << k << ": " << getK(arr, n, k);
    return 0;

}

