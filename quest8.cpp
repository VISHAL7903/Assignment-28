#include<iostream>
using namespace std;
class Coords3D
{
    private :
    double x, y, z;
    public :
    Coords3D(){x =y =z =0;}
    Coords3D(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void display()
    {
        cout<<"x ="<<x <<endl;
        cout<<"y ="<<y <<endl;
        cout<<"z ="<<z <<endl;
    }
    Coords3D operator,(Coords3D obj)
    {
        Coords3D tmp;
        tmp.x = obj.x;
        tmp.y = obj.y;
        tmp.z = obj.z;
        return tmp;
    }
};
int main()
{
    double x,y,z;
    Coords3D c1(1 ,3, 5);
    Coords3D c2(2 ,4, 6);
    Coords3D c3;

    c3 = (c1, c2);
    c3.display();

    cout<<endl;
    Coords3D c4(10 , 15, 20);

    c3=(c2,c1,c4);
    c3.display();
    return 0;
}