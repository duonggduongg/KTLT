#include<iostream>
#include<conio.h>
using namespace std;

//Chong toan tu cho so phuc

class Complex {
public:
    int re; //Phan thuc
    int im; //Phan ao

    Complex(int re, int im){
        this->re = re;
        this->im = im;
    }
    Complex (Complex& c){
        re = c.re;
        im = c.im;
    }
    Complex operator + (Complex c);
    Complex operator - (Complex c);
    friend ostream& operator << (ostream& out, const Complex& c)
    {
        out << "(" << c.re << ", " << c.im << "i)";
        return out;
    }
    
};

Complex Complex::operator + (Complex c)
{
    Complex add(this->re + c.re, this->im + c.im);
    return add;
}
Complex Complex::operator - (Complex c)
{
    Complex sub(this->re - c.re, this->im - c.im);
    return sub;
}
int main(){
    Complex a(1, 2);
    Complex b(2, 4);
    cout << a + b << endl;
    cout << a - b << endl;
    return 0;
}