//Nguyen Long Duong 20200121 - Bai 3 - 2.2


#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int doi;
    doi = *a;
    *a = *b;
    *b = doi;
}

int main(){
    int a, b;
    cin >> a >> b;
    swap(&a, &b);
    cout << "Gia tri a va b sau khi doi la:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b ;
    return 0;
}