#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int,int);
    void printNum()
    {
        cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x,int y){//--This is parameterized constructor as it takes 2 parametrs
    a = x;
    b = y;
}
int main(){
    //Implict call
    Complex a(4,6);
    a.printNum();

    //Explict call
    Complex b = Complex(5,7);
    b.printNum();
    return 0;
}