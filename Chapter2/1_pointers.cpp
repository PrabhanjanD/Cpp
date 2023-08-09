#include <iostream>
using namespace std;
//*=value,&=address
int main(){
    //What is pointer? ---->Its the data type which holds the address of other datatype

    int a=5;
    int* b=&a;    //(int *b;)(b=&a;) b is the pointer of a(* and variable name declares that it is the pointer of specific var)
    //& ----> (Address of) operator
    cout<<"The address of a is "<<b<<endl;// "&" gives addres of the specific variable with which it is present
    cout<<"The address of a is "<<&a<<endl;


    //*----->(Value at) Derefrence operator
    cout<<"The value at address of b is "<<*b<<endl; // "*" it gives the value of the operator


    //Pointer to pointer
    int**c=&b;
    cout<<"The addres of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"THe value at address c is "<<*c;
    return 0;
}