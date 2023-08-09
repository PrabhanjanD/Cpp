//There are two types of header files
//1.System header file:It comes with the coompiler
#include<iostream>
//2.User defined header file:It is written by the programmer
//#include<this.h>  This will throw an error if this.h  is not present in current directory

using namespace std;

int main(){
    
    cout<<"Operators in c++:"<<endl;
    //Arithmatic operator
    int a=4,b=6;
    cout<<"The value of a + b is:"<<a+b<<endl;
    cout<<"The value of a - b is:"<<a-b<<endl;
    cout<<"The value of a * b is:"<<a*b<<endl;
    cout<<"The value of a / b is:"<<a/b<<endl;
    cout<<"The value of a ++  is:"<<a++<<endl;
    cout<<"The value of a --  is:"<<a--<<endl;
    cout<<"The value of a % b is:"<<a%b<<endl;
    cout<<"The value of --a b is:"<<--a<<endl;

    //Assingment operator:Used to assign values of variables
    //int a=3,b=9;
    //char d='d';
    
    //Comparision operators
    cout<<"the value of a==b is"<<(a==b)<<endl;
    cout<<"the value of a!=b is"<<(a!=b)<<endl;
    cout<<"the value of a>=b is"<<(a>=b)<<endl;
    cout<<"the value of a<=b is"<<(a<=b)<<endl;
    cout<<"the value of a<b is"<<(a<b)<<endl;
    cout<<"the value of a>b is"<<(a>b)<<endl;

    //Logical operators
    cout<<"Following are the logical operators"<<endl;
    cout<<"The value of logical operator and ((a==b) && (a<b)) is"<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical operator or ((a==b) || (a<b)) is"<<((a==b) || (a<b));
    return 0;}
