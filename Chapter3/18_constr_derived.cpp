#include <iostream>
using namespace std;
/*
Case 1:
class B :public A{
    Order of execution of contructor ---> B() then A()
};


Case 2:
class A:public B,public C{
    Order of execution of constructor ---> B() then C() and A()
};


Case 3:
class A:public B,virtual public C{
    Order of execution of constructor --->First C() then B() and A()
    // Virtual function is given first priority
}
*/
class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 class constructor is called"<<endl;
    }
    void printData_base1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructor is called"<<endl;
    }
    void printData_base2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived:public Base1,public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d): Base1(a),Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructour called"<<endl;
    }

    void printData(void){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};

int main(){
    Derived d(2,4,6,8);
    d.printData_base1();
    d.printData_base2();
    d.printData();
    return 0;
}