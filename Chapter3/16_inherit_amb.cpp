#include <iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you ?"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Kaise hey lodu ?"<<endl;
    }
};

class Derived:public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base2 :: greet();
    }
};

int main(){

    Derived d;
    d.greet();
    return 0;
}