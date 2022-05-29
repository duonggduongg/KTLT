//Nguyen Long Duong 20200121 - Bai 3 - 2.3


#include<iostream>

using namespace std;

int addElementsOfArray(int* p, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    return sum;
}

int main(){
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Tong gia tri cac phan tu cua mang la:" << endl;
    cout << addElementsOfArray(arr, n);
    return 0;


}