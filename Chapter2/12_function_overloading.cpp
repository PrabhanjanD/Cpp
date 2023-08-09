#include <iostream>
using namespace std;
//Calculate the volume of cylinder
int volume(double r,int h){
    return(3.14 * r * r * h);
}

//Calculate the volume of cube
int volume(int a){
    return(a*a*a);
}

//Rectangular box
int volume(int l,int b,int h){
    return (l*b*h);
} 

int main(){
    cout<<"The volume of the cylinder is "<<volume(3,4)<<endl;
    cout<<"The volume of the cube is "<<volume(2)<<endl;
    cout<<"The volume of the rectangular box is "<<volume(2,3,5)<<endl;
    return 0;
}