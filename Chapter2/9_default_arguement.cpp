#include <iostream>
using namespace std;

float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney * factor;
}
int main(){
    int money=100000;
    cout<<"If you have "<<money<<"Rs in your bank account,you willl receive "<<moneyReceived(money)<<"Rs after one year"<<endl;
    cout<<"If you are VIP then if u have "<<money<<"Rs in your bank account,you willl receive "<<moneyReceived(money,1.10)<<"Rs after one year";
    return 0;
}