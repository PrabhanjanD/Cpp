#include <iostream>
#include<string>
using namespace std;
 class binary{
        string s;
        public:
        void read(void);  //Here we have made class of binary in that we have declared string s and we have made 2 function
        void chk_bin(void);//1 fun for read the num, and 1 for checking the given no is binary or not
    };
    void binary :: read(void){  //We have used scope resolution and written the code for specific function
        cout<<"Enter a binary number"<<endl;
        cin>>s;
    }
    void binary :: chk_bin(void){
        for(int i=0; i < s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"Incorrect binary format"<<endl;
            }
            else{
                cout<<"The number is binary"<<endl;
                exit (0);
            }
        }
    }
int main(){
    binary b;
    b.read();
    b.chk_bin();

    return 0;
}