#include <iostream>
using namespace std;
template <class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data = a;
    }
    void display();
    
};

template <class T>
void Harry<T>::display(){
    cout<<"The no. is "<<data<<endl;
    }

int main(){
    Harry <int>h(5);
    cout<<h.data<<endl;
    h.display();
    return 0;
}