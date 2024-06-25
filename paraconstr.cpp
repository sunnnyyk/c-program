#include<iostream>
using namespace std;

class point{
    public:
    double x,y;
    point(double n,double m)
    {
        x=n;
        y=m;
        cout<<"parametr constructor called"<<endl<<"x is"<<x<<"y is"<<y<<endl;
    }
};

int main()
{
    point p(1,2);
    cout<<"x is"<<p.x<<" "<<"y is"<<p.y<<endl;
    cout<<"constructor called"<<endl;
    p.x=3.0;
    p.y=4.0;
    cout << "(" << p.x << " , " << p.y << ")";
    cout<<"outside address of p"<<&p<<endl;

}