#include <iostream>
using namespace std;

//Function prototype
//type function name(arguments);
int sum(int a,int b){  //Here we have created the function
        int c=a+b;
        return c;
        
}

int main(){
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl; //Here we have called the function and the code we have done there is exucated

    
    return 0;
}
