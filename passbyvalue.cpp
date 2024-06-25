#include<iostream>
using namespace std;

class point{
    public:
    double x,y;
};
void ofsetpoint(point &p,double x, double y) //pass by refrence
{
    p.x +=x;
    p.y +=y;
    cout<<"inside address of p"<<&p<<endl;
}
int main()
{
    point p;
    p.x=3.0;
    p.y=4.0;
    ofsetpoint(p,1.0,2.0);
    cout << "(" << p.x << " , " << p.y << ")";
    cout<<"outside address of p"<<&p<<endl;

}