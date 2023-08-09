#include <iostream>
using namespace std;
class Calci
{
    int a,b;

    public:
    void getData(void);
    void setData(void);
};

void Calci :: getData(void)
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
}

void Calci :: setData(void)
{
    cout<<a+b<<endl;
}
int main(){
    Calci simp;
    simp.getData();
    simp.setData();
    return 0;
}