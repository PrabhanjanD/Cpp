#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    cout<<"The sum of a and 4 is "<<sum(a,4)<<endl;
    cout<<"The sum a,5 and 6 is "<<sum(a,5,6);
    return 0;
}