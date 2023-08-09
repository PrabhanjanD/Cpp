#include <iostream>

using namespace std;

int main(){
//***********Built in data type*********
//int a,b,c;
  //  cout<<"Enter the value of a:"<<endl;
  //  cin>>a;
  //  cout<<"Enter the value of b:"<<endl;
  //  cin>>b;
  //  c = a + b;
  //  cout<<"The sum is: "<<c;
  //  return 0;


//**********Float,double and long double literals**********
//float d=27.7f;
//long double e=27.7l;
//cout<<"The value of 27.7 is "<<sizeof(27.7)<<endl;
//cout<<"The value of 27.7f is "<<sizeof(27.7f)<<endl;
//cout<<"The value of 27.7F is "<<sizeof(27.7F)<<endl;
//cout<<"The value of 27.7l is "<<sizeof(27.7l)<<endl;
//cout<<"The value of 27.7L is "<<sizeof(27.7L)<<endl;
//return 0;


//************Reference Variable*********
//Prabhanjan ----->Prabhya ----->Anna ---->Baban
float x=1001;
float & y=x;
cout<<x<<endl;
cout<<y<<endl;
return 0;

//***********Typecasting***********
int a=45;
float b=45.56;
cout<<"The value of a is"<<float(a)<<endl;
cout<<"The value of a is"<<(float)a<<endl;

cout<<"The value of b is"<<int(b)<<endl;
cout<<"The value of b is"<<(int)b<<endl;

cout<<"The sum is"<<a+b<<endl;
cout<<"The sum is"<<a+int(b);
return 0;
}