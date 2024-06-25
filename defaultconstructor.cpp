#include<iostream>
using namespace std;

class point{
    public:
    double x,y;
    point()
    {
        x=0;
        y=0;
        cout<<"default constructor called"<<endl;
    }
};

int main()
{
    point p;
    cout<<"constructor called"<<endl;
    p.x=3.0;
    p.y=4.0;
    cout << "(" << p.x << " , " << p.y << ")";
    cout<<"outside address of p"<<&p<<endl;

}