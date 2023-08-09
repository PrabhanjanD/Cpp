#include <iostream>
using namespace std;

/*While loop syntax
while(condition);
{
    C++ statements;
}*/
int main(){
    int i=1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    return 0;
}


//**********dowhile loop**********
int main(){
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=10);
    return 0;     //Difference between while and dowhile is that while checks condition iniataly & dowhile checks condition afterwards
}
