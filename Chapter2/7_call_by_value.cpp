#include <iostream>
using namespace std;

//int sum(int a,int b){
//    int c=a + b;
//    return c;
//}

 //Call by reference by pointer
void swapPointer(int * a,int * b){ //a = 4,b = 5
    int temp = *a;       //4 4 5
    *a=*b;               //4 5 5
    *b=temp;             //4 5 4
}

//Call by reference using reference variable
void swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=4,y=5;
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    

    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    swapReferenceVar(x,y);
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
    return 0;
}