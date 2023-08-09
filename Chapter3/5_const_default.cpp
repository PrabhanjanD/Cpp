#include <iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
    Simple(int a,int b=7){
        data1 = a;
        data2 = b;
    }
    void printNum();
};
void Simple::printNum(){
    cout<<"The data1 and data2 value is "<<data1<<" & "<<data2<<endl;
    }
int main(){
    Simple s(3,4);
    s.printNum();

    Simple p(2);
    p.printNum();
    return 0;
}