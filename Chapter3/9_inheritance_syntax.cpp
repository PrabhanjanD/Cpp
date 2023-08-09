#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id = inpId;
        salary = 27.0;
    }
    Employee(){}
};
/*Derived Class syntax
class {{Derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

//Creating a programmer class derived from Employee base class
class Programmer: public Employee{
    public:
    Programmer(int inpId){
        id = inpId;
    }
    int languageCode = 5;
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillf(6);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();
    return 0;
}
/*Note:
1.Visibility mode is how u inherit memebers of base class whether it is publically or private
2.Default visibility mode is private
3.Private visibility mode:Public memebers of base class becomes private member of derived class
4.Public visibility mode:Public members of base class becomes public member of derived class
5.Private members of base class cannot be inherited into derived class
*/