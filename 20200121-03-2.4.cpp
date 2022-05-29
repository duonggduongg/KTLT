//Nguyen Long Duong 20200121 - Bai 3 - 2.4

#include<iostream>
#include<string>

using namespace std;

// Lưu ý: chương trình chỉ đo được khoảng cách của chuỗi không có khoảng trắng
int lenstr(string *s){
    int len = 0;
    while((*s)[len] != '\0'){
        len++;
    }
    return len;
}

int main(){
    string s;
    cin >> s;
    cout << "Chuoi co chieu dai la: "; 
    cout << lenstr(&s);
    return 0;
}