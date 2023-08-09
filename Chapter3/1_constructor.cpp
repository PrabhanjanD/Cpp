#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    //Creating a constructor
    //Constructor is a special member function with the same name as of the class.It is automatically invoked
    //It is  used to intialize the objects of its class
    Complex(void); //Constructor declaration
    void printNum(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};

Complex :: Complex(void){ //----This is default constructor
    a = 10;
    b = 2;
}


int main(){
    Complex c;
    c.printNum();

    return 0;
}

/*Charteristics of construcrtors
It should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have  default have arguements
*/
