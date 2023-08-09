#include <iostream>
using namespace std;
class Empployee
{   int id;
    
    public:
        void setData(void){
            cin>>id;
        }
        void getData(void){
            cout<<"The id of this employee is"<<id<<endl;
        }
};


int main(){

    
    return 0;
}