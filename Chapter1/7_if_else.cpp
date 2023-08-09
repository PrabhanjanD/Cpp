#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;

    if (age<18){
        cout<<"Your are not allowed in my party"<<endl;
    }

    else if(age==18){
        cout<<"You are still kid"<<endl;
    }

    else{
        cout<<"You are allowed to my party"<<endl;
    }
switch(age)
{
    case 18:
    cout<<"You are 18"<<endl;
    break;

    case 20:
    cout<<"You are 20 still"<<endl;
    break;

    default:
    cout<<"no"<<endl;
    break;
}
    return 0;
}