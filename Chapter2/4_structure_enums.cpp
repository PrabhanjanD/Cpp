#include <iostream>
using namespace std;


    struct employee{
        int eId;
        char favChar;
        float salary;
    };
    
    int main(){
        struct employee harry;
        harry.eId=1;
        harry.favChar='p';
        harry.salary=1200000;
        

        cout<<"The value is "<<harry.eId<<endl;
        cout<<"The value is "<<harry.favChar<<endl;
        cout<<"The value is "<<harry.salary<<endl;
    
    return 0;
}
//typedef struct employee{
//        int eId;
//        char favChar;
//        float salary;
//    }ep;           //typedef is nothing but,we can write ep rather than struct employee
//    
//    int main(){
//        ep harry;
//        harry.eId=1;
//        harry.favChar='p';
//        harry.salary=1200000;
//        
//
//        cout<<"The value is "<<harry.eId<<endl;
//        cout<<"The value is "<<harry.favChar<<endl;
//        cout<<"The value is "<<harry.salary<<endl;
//    
//    return 0;
//    }





