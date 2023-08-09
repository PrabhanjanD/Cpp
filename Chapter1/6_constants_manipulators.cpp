#include<iostream>
#include<iomanip>
using namespace std;

//int main(){
    //int a = 7;
    //cout<<"The value of a was "<<a<<endl;
    //a = 45;
    //cout<<"The value of a is "<<a;
    //return 0;}

//int main(){
//
//    const float a = 3.14;      //If we need to keep the value constant then before that value "const" is used
//    cout<<"The value of a was "<<a<<endl;
//    a = 45.6;
//    cout<<"The value of a is "<<a;
//    return 0;
//}



//**********Manipulator**********
//int main(){
//    int a = 3,b = 78,c = 1233;
//    cout<<"The value of a without setw is "<<a<<endl;
//    cout<<"The value of b without setw is "<<b<<endl;
//    cout<<"The vlaue of c without setw is "<<c<<endl;
//
//
//    cout<<"The value of a with setw is "<<setw(4)<<a<<endl;
//    cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
//    cout<<"The vlaue of c with setw is "<<setw(4)<<c<<endl;
//    return 0;
//}



//***********Operator precedence*********
int main(){
    int a = 4,b = 7;
    int c = ((((a*5)+b)-45)+87);  //precedence means preference 
    cout<<c;
    return 0;
}






