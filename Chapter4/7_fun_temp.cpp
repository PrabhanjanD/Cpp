#include <iostream>
using namespace std;
//float funcAverage(int a,int b){
//    float avg = (a + b)/2.0;
//    return avg;
//}
//float funcAverage2(int a,int b){
//    float avg = (a + b)/2.5;
//    return avg;}
//
template<class T1,class T2>
float funcAverage(T1 a,T2 b){
    float avg = (a + b)/2.0;
    return avg;
}

int main(){
    float a;
    a = funcAverage(4,2);
    printf("The average of the num is %.3f",a);
    
    return 0;
}