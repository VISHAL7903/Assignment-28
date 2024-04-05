#include<iostream>
using namespace std;

class Complex 
{
private:
    int real, img;

public:
    Complex(int x, int y) 
    {
        real = x;
        img = y;
    }

    Complex()
    {

    }
    void setData(int real, int img) 
    {
        this->real = real;
        this->img = img;
    }

    friend ostream &operator<<(ostream &output, const Complex &c);
    friend istream &operator>>(istream &input, Complex &c);
};

ostream &operator<<(ostream &output, const Complex &c) 
{
    output << "Real = " << c.real << " Imag = " << c.img << endl;
    return output;
}

istream &operator>>(istream &input, Complex &c) 
{
    cout << "Enter real part: ";
    input >> c.real;
    cout << "Enter imaginary part: ";
    input >> c.img;
    return input;
}

int main() 
{
    Complex c1, c2;
    c1.setData(3, 4);
    c2.setData(5, 3);

    cout << c1 << c2;

    Complex c3, c4;
    cout << "Enter complex number c3:" << endl;
    cin >> c3;
    cout << "Enter complex number c4:" << endl;
    cin >> c4;
    cout << c3 << c4;

    return 0;
}
