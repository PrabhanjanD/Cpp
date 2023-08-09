#include <iostream>
#include <cmath>
using namespace std;
/*Create 2 classes
1.Simple Calculator-Takes input of two functions using utility function & performs +,-,*,/.

2.Scientific Calculator-Takes input of two numbers using a utility function and perform any 
four scientific operation of your choice and displays the result using another functions

Create another class Hybrid calculator and inherit it using these 2 classes:
Q1.What type of inheritance you are using?------>Multiple
Q1.Which mode of inheritance you are using?---->Public
*/
class Simple{
    int a;
    int b;
    public:
    void get_data_simple(){
        cout<<"Enter 1st number"<<endl;
        cin>>a;
        cout<<"Enter 2nd number"<<endl;
        cin>>b;
    }

    void set_data_simple(){
        cout<<"The sum is: "<<a+b<<endl;
        cout<<"The subtraction is: ";
        if (a>b){
            cout<<a-b<<endl;
        }
        else{
            cout<<"The number cannot be subtracted"<<endl;
        }
        cout<<"The division of a and b is: "<<a/b<<endl;
        cout<<"The multiplication of a and b is: "<<a*b<<endl;
    }
};

class Scientific{
    int a,b;
    public:
    void get_data_scientific(){
        cout<<"Enter 1st number"<<endl;
        cin>>a;
        cout<<"Enter 2nd number"<<endl;
        cin>>b;
    }
    
    void set_data_scientific(){
        cout<<"The value of sin(a): "<<sin(a)<<endl;
        cout<<"The value of cos(a): "<<cos(a)<<endl;
        cout<<"The value of tan(b): "<<tan(b)<<endl;
        cout<<"The value of sin(b): "<<sin(b)<<endl;
    }
};
class Hybrid:public Simple,public Scientific{

};
int main(){
    Hybrid h;
    h.get_data_simple();
    h.set_data_simple();
    h.get_data_scientific();
    h.set_data_scientific();
    return 0;
}