/*Note: Bài tập của em phần lớn test kết quả bằng cách nhập dữ liệu từ bàn phím nên chưa có 
file dữ liệu vào và ra. Ở bài tập lần sau em sẽ có gắng hoàn thiện hơn.
Em xin cảm ơn
*/



//Nguyen Long Duong 20200121 - Bai 3 - 2.1

#include<iostream>

using namespace std;

int add(int *a, int *b){
    return *a + *b;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << "Tong hai so la: " << add(&a, &b);
    return 0;
}