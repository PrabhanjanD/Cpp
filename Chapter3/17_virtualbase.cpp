#include <iostream>
using namespace std;
/*
Student --->  Test
Student --->  Sports
Sports --->  Result
Sports --->  Result
*/
class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};

class test :virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1;
        physics = m2;
    }

    void print_marks(void){
        cout<<"Your result of"<<endl
        <<"Maths is: "<<maths<<endl
        <<"& Physics is: "<<physics<<endl;
    }
};

class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }

    void print_score(void){
        cout<<"Your PT score is: "<<score<<endl;
    }
};
/*Roll no is present inherited from both class but by using virtual base class
 we can avoid these ambiguity*/

class result:public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;
    }
};
int main(){
    result harry;
    harry.set_number(27);
    harry.set_marks(75.0,92.3);
    harry.set_score(8);
    harry.display();
    return 0;
}