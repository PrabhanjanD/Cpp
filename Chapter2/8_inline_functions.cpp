#include <iostream>
using namespace std;

inline int product(int a,int b){ //We make function inline when the work of function is smaller for less run time
//NOTE:Only used for small functions
return a*b;
}

int main(){
    int a,b;
    cout<<"Enter your number"<<endl;
    cin>>a>>b;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    return 0;
}