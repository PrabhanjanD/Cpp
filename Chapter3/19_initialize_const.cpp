#include <iostream>
using namespace std;
/*
Syntax for intialization of constructor
constructor (argument-list) : intialization-section{
    Code;
}
*/
class Test{
    int a; //--
    int b;
    public:
   // Test(int i,int j) : a(i),b(j)
   //Test(int i,int j) : a(i),b(i + j)
   //Test(int i,int j) : a(i),b(2*j)
    Test(int i,int j) : a(i),b(a + j)
    //Test(int i,int j) : b(a + j),a(i) --This will create an error bcoz a is intialized first
    {
        cout<<"Constructor is executed"<<endl;
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;

    }
};

int main(){
    Test f(4,8);
    return 0;
}