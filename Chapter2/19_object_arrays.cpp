#include <iostream>
using namespace std;
class Employee{
    int id;
    int salary;

    public:
    void setId(void)
    {
        cout<<"Enter the id of employee is "<<endl;
        cin>>id;
    }

    void getId(void)
    {
        cout<<"The id of the employee is "<<id<<endl;
    }
};
int main(){
    //Employee harry,chetan,omkya;
    //harry.setId();
    //harry.getId();
    Employee fb[4];
    for(int i=0;i<3;i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}