#include <iostream>
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
    Complex() {}
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
    input >> c.real >> c.img;
    return input;
}

int main() 
{
    Complex c1(2, 3), c2(4, 4);
    cout << c1 << c2;

    Complex c3, c4;
    cout << "Enter complex number c3 (real imag): ";
    cin >> c3;
    cout << "Enter complex number c4 (real imag): ";
    cin >> c4;
    cout << c3 << c4;

    return 0;
}
