//Nguyen Long Duong 20200121 - Bai 04 - 1.4

#include <iostream>
using namespace std;

//Tao ham sap xep mang theo thu tu khong giam

void sortArray(int* a, int n){
    int change;
    for(int i = 0; i < n; i++){
        for(int j = i +1; j < n; j++){
            if(a[i] > a[j]){
                change = a[i];
                a[i] = a[j];
                a[j] = change;
            }
        }
    }
}
//Tao ham tim gia tri xuat hien trong mang nhieu nhat sau khi da sap xep

void CountAppearanceOfEachNum(int* a, int n){
    int num = a[0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == num){
            count++;
        }
        else{
            cout << "(" << num << "," << count << ")" << endl;
            count = 1;
            num = a[i];
            
        }
    }
    cout << "(" << num << "," << count << ")";
}
int main(){
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sortArray(arr, n);
    CountAppearanceOfEachNum(arr, n);
    return 0;
}
/* Chuong trinh cua em hien ra so la xuat hien cua tat ca cang gia tri trong mang nen ta co the biet duoc gia tri xuat hien nhieu nhat khi nhin vao ket qua
Voi (a,b) thi a la gia tri co trong mang, b la so lan xuat hien cua gia tri do
*/