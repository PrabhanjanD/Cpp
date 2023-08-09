#include <iostream>
using namespace std;

union money{
    int rice;
    char car;
    float dolllars;
};
int main(){
    union money m1; //It will run value at a time
    m1.rice=22;
    m1.car='p';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    return 0;
}

//int main(){
//    enum Meal{breakfast,lunch,dinner}; //Makes program more readable
//    Meal m1=breakfast;
//    Meal m2=lunch;
//    Meal m3=dinner;
//    cout<<m1<<endl;
//    cout<<m2<<endl;
//    cout<<m3<<endl;
//    return 0;
//}