#include <iostream>
using namespace std;
class Student{
    protected:
    int Roll_number;
    public:
    void set_roll_numbers(int);
    void get_roll_numbers(void);
};
void Student :: set_roll_numbers(int r){
    Roll_number = r;
}
void Student :: get_roll_numbers(void){
    cout<<"The roll number is: "<<Roll_number<<endl;
}


class Exam:public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void Exam:: void set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void Exam:: void get_marks(void){
    cout<<"The marks obtained in maths are :"<<maths<<endl;
    cout<<"The marks obtained in physics are :"<<physics<<endl;
}


class Result:public Exam{
    float percentage;
    public:
    void display_result(){
        get_roll_numbers();
        get_marks();
        cout<<"Your percentage is "<<(maths + physics)/2<<endl;
    };
};
/*
For protected member
                    Public Derivation      Private Derivation     Protected Derivation
1.Private           Not Inherited          Not Inherited          Not Inherited
2.Protected         Protected              Private                Protected
3.Public            Public                 Private                Protected
*/
int main(){
    Result harry;
    harry.set_roll_numbers(27);
    harry.set_marks(90.5, 95.2);
    harry.display_result();
    return 0;
}