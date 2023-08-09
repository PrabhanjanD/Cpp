#include <iostream>
using namespace std;
/*Multiple inheritance syntax
class derived:visibility-mode base1,visibility-mode base2{

}*/
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};

class Derived:public Base1,public Base2{
    public:
    void show(){
        int c;
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        c = base1int + base2int;
        cout<<"The addition of base1int and base2int is "<<c<<endl;
    }
};

int main(){
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(2);
    harry.show();
    
    return 0;
}