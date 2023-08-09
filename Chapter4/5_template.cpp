#include <iostream>
using namespace std;
/*CLASS TEMPLATE WITH MULTIPLE PARAMETERS(1,2 OR MORE THAN 2)
template<class T1,class T2>
class nameofclass{
    //body
}
*/
template<class T1,class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a,T2 b){
        data1 = a;
        data2 = b;
    }


    //void display(){
    //    cout<<this->data1<<endl<<this->data2;
    //}
    void display(){
        cout<<"Additon of two numbers "<<data1 + data2;
    }
};
int main(){
    myClass <int,int>obj(1,3);
    obj.display();
    
    return 0;
}