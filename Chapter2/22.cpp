#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumber(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"ENter the value of b"<<endl;
        cin>>b;
        
    }
    friend Complex sumComplex(Complex o1,Complex o2);
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<" i"<<endl;
    }
};

Complex sumComplex(Complex o1,Complex o2){
    int a,b;
    cout<<((o1.a+o2.a),(o2.a+o2.b))<<endl;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber();
    c1.printNumber();

    c2.setNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}