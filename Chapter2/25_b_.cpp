#include <iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:

          void indata(int a){
              val1 = a;
    }

           void display(void){
              cout<<val1<<endl;
    }
};

class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
        void indata(int a){
         val2 = a;
         }

        void display(void){
            cout<<val2<<endl;
        }  
};

void exchange(c1 &x,c1 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(32);
    oc2.indata(27);
    exchange(oc1, oc2);

    cout<<"THe value of c1 after swapping becomes:";
    oc1.display();
    cout<<"The value of c2 after swapping becomes:";
    oc2.display();

    return 0;
}