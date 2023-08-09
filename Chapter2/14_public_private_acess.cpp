#include <iostream>
using namespace std;

class Employee
{
    private :
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1,int c1);  //Just declared we will call this function afterwards
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void Employee :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee harry;
    //harry.a =34; //This will throw an error bcoz we cannot access it bcoz it is private
    harry.d = 2;
    harry.e = 1;
    harry.setData(4,5,6);
    harry.getData();
    return 0;
}