#include <iostream>
using namespace std;
//template <class T> 

    void func(int a){
        cout<<"This is func() "<<a<<endl;
    }
    template <class T>
    void func(T a){
        cout<<"This is templatised func() "<<a<<endl;
    }

int main(){
    func(4);  //Exact match will take highest priority
    return 0;
}