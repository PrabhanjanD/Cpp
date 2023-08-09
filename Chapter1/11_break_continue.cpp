#include <iostream>
using namespace std;

int main(){
    for (int i=0;i<11;i++)
    {
        cout<<i<<endl;
        if(i==2){
            break; //it just stops the loop
        }
    }
    

    for(int i=0;i<11;i++)
    {
        if(i==2){
            continue;//It just neglect the specific value and continues the loop further
        }
        cout<<i<<endl;
    }
    return 0;
}

