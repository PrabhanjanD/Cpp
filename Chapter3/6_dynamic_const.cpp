#include <iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y,int r);
    void show();
};
    BankDeposit :: BankDeposit(int p,int y,float r){
        principal = p;
        years = y;
        interestRate = r;
        //returnValue = principal;
        //int i = 1;
        //for(i=0;i<y;i++){
            returnValue = principal + (principal*interestRate*years);
        }

    //} 

    BankDeposit :: BankDeposit(int p,int y,int r){
        principal = p;
        years = y;
        interestRate = float(r)/100;
        returnValue = principal;
        int i = 1;
       // for(i=0;i<y;i++){
            returnValue = principal + (principal*interestRate*years);
          //  returnValue = returnValue * (1+interestRate);
       // }

    } 

    void BankDeposit :: show(){
        cout<<endl<<"Principal amount was "<<principal<<endl<<"Return value after "<<years<<" years is "<<returnValue<<endl;
    }


int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the vallue of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();
    return 0;
}