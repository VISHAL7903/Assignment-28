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
    Complex ()
    {

    }
    
    friend ostream &operator<<(ostream &os, const Complex &c) 
    {
        os<<"Real = "<< c.real<<" Img = "<<c.img<<endl;
        return os;
    }
    void setData(int real, int img)
    {
        this->real = real;
        this->img = img; 
    }
    Complex & operator = (Complex &c)
    {
        this->real = c.real;
        this->img = c.img;
        return *this;
    }
};
int main()
{
    Complex c1(2, 3);
    Complex c2;
    c2.setData(4,5);
    Complex c3;
    c3 = c1= c2;
    cout<<c1 << c2;
    return 0;
}