/*Why is templates
1.DRY 
2.Generic programming
*/

//Syntax for templates
/*
template <class T>
class vector{
    T* arr;    //T can be int,char,float or any datatype
    Public:
    vector(T * ar){
        //Code
    }

}
int main(){
    vector<int>myVec(ptr);
    vector<float>myfVec(ptr1);
}
*/
#include <iostream>
using namespace std;
template <class T>
class vector{
    public:
    T * arr;
    int size ;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v){
        T d = 0;
        for(int i = 0; i<size; i++){
            
            d += this->arr[i] * v.arr[i];
            
        }
        return d;
    }

};
int main(){
   // int a;
    vector <float>v1(3);
    v1.arr[0] = 4.7;
    v1.arr[1] = 9.5;
    v1.arr[2] = 7.2;

    vector <float>v2(3);
    v1.arr[0] = 2.3;
    v1.arr[1] = 5.3;
    v1.arr[2] = 3.1;
    v1.dotProduct(v2);
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}