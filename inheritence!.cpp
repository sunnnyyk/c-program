#include<iostream>
using namespace std;

class account{
    public:
    float salary=13000;


};
class emp:public account{
    public:
    float bonus=3000;

};
int main()

{
    emp E1;
    cout<<"salary is :"<<E1.salary<<endl;
    cout<<"bonus is :"<<E1.bonus<<endl;
    return 0;
}