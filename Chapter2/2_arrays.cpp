#include <iostream>
using namespace std;

int main(){
    int marks[]={12,27,7,1001};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    marks[3]=5;  //We can upgrade/change the array
    cout<<marks[3]<<endl;

    //Using Forloop
    for(int i=0;i<4;i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //Using Whileloop
    int i=0;
    while(i<4){
        cout<<marks[i]<<endl;
        i++;
    }

    //We can write an array in this form also
    int mathMarks[4];
    mathMarks[0]=11;
    mathMarks[1]=15;
    mathMarks[2]=18;
    mathMarks[3]=17;

    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    return 0;
}