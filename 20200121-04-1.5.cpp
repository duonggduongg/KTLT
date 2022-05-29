//Nguyen Long Duong 20200121 - Bai 04 - 1.5

#include<iostream>
using namespace std;

/*Chuong trinh su dung mang 2 chieu de bieu dien ma tran
va mang 1 chieu de bieu dien vector
*/

//Ham cho vector
void getVector(int* a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void add2Vectors(int* a, int* b, int n){ 
    for(int i = 0; i < n; i++){
        cout << a[i] + b[i] << " ";
    }
    cout<< endl;
}
void sub2Vectors(int* a, int* b, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] - b[i] << " ";
    }
    cout << endl;
}
void mul2Vectors(int* a, int* b, int n){ // Tich vo huong
    for(int i = 0; i < n; i++){
        cout << a[i] * b[i] << " ";
    }
    cout << endl;
}
//Ham cho ma tran
void getMatrix(int* a, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i * n + j] << " " ;
        }
        cout << endl;
    }
}
void add2Matrix(int* a, int* b, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i * n + j] + b[i * n + j] << " ";
        }
        cout << endl;
    }
}
void sub2Matrix(int* a, int* b, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i * n + j] - b[i * n + j] << " ";
        }
        cout << endl;
    }
}
void mul2Matrix(int* a, int* b, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i * n + j] * b[i * n + j] << " ";
        }
        cout << endl;
    }
}

int main(){
    //Khai bao
    int vector1[100], vector2[100];
    int matrix1[1000], matrix2[1000];
    int n1;
    int m2, n2;
    cout << "Nhap do dai vector" << endl;
    cin >> n1;
    cout << "Nhap so hang va so cot ma tran" << endl;
    cin >> m2 >> n2;
    cout << "Nhap vector 1:" << endl;
    for(int i = 0; i < n1; i++){
        cin >> vector1[i];
    }
    cout << "Nhap vector 2:" << endl;
    for(int i = 0; i < n1; i++){
        cin >> vector2[i];
    }
    cout << "Nhap ma tran 1" << endl;
    for(int i = 0; i < m2; i++){
        for(int j = 0; j < n2; j++){
            cin >> matrix1[i * n2 + j];
        }
    }
    cout << "Nhap ma tran 2" << endl;
    for(int i = 0; i < m2; i++){
        for(int j = 0; j < n2; j++){
            cin >> matrix2[i * n2 + j];
        }
    }
    
    //Hien thi ket qua
    cout << "Vector thu nhat la: " << endl;
    getVector(vector1, n1);
    cout << "Vector thu hai la: " << endl;
    getVector(vector2, n1);
    cout << "Tong 2 vector la: " << endl;
    add2Vectors(vector1, vector2, n1);
    cout << "Hieu 2 vector la: " << endl;
    sub2Vectors(vector1, vector2, n1);
    cout << "Tich vo huong 2 vector la: " << endl;
    mul2Vectors(vector1, vector2, n1);

    cout << "Ma tran thu nhat la: " << endl;
    getMatrix(matrix1, m2, n2);
    cout << "Ma tran thu hai la: " << endl;
    getMatrix(matrix2, m2, n2);
    cout << "Tong 2 ma tran la: " << endl;
    add2Matrix(matrix1, matrix2, m2, n2);
    cout << "Hieu 2 ma tran la: " << endl;
    sub2Matrix(matrix1, matrix2, m2, n2);
    cout << "Tich 2 ma tran la: " << endl;
    mul2Matrix(matrix1, matrix2, m2, n2);

    return 0;
    
}