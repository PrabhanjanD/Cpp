#include <iostream>
using namespace std;
class Complex{
    int x,y;
    public:
    Complex(int a,int b){
        x = a;
        y = b;
    }

    Complex(int a){
        x = a;
        y = 0;
    }
    
    void printNum(){
        cout<<"The complex number is "<<x<<"+"<<y<<"i"<<endl;
    }
};
int main(){
    Complex c1(3,4);
    c1.printNum();

    Complex c2(2);
    c2.printNum();

    return 0;
}