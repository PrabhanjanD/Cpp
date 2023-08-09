#include <bits/stdc++.h>
#define max 20;
using namespace std;
struct employee{
    string name;
    long int code;
    string designation;
    int exp;
    int age;
};

int num;
void showMenu();

employee emp[max],tempemp[max],
    sortemp[max],sortemp1[max];

void build(){
    cout<<"Build the table";
    cout<<"Max entties can be"
    <<max;

    cout<<"Enter the number of entries req";
    cin>>num;

    if(num>20){
        cout<<"max entries can be 20";
        num = 20;
    }
    cout<<"Enter the following data";
    for(int i = 0;i <num;i++){
    cout<<"Name";
    cin >> emp[i].name;

    cout<<"ENter empl id";
    cin>> emp[i].code;

    cout<<"Enter designation";
    cin>>emp[i].designation

    cout<<"Enter experience";
    cin>>emp[i].exp;

    cout<<"Enter age";
    cin>>emp[i].age;
    }
    showMenu();
}

void insert(){
    if(num<max){
    int i = num;
    num++;

    cout<<"Enter the info\n";
    cout<<"Name";
    cin >> emp[i].name;

    cout<<"ENter empl id";
    cin>> emp[i].code;

    cout<<"Enter designation";
    cin>>emp[i].designation

    cout<<"Enter experience";
    cin>>emp[i].exp;

    cout<<"Enter age";
    cin>>emp[i].age;  
}
    else{
        cout<<"Employee table full";
    }
    showMenu();
}
void deleteIndex(){

}
void deleteRecord(){

}

void searchRecord(){
    cout<<"Ente empl id";
    int code;
    cin>>code;
    for(int i=0;i<num;i++){
        if (emp[i].code==code){
            cout<<"Name"<<emp[i].name<<"\n";
            cout<<"Emp id"<<emp[i].code<<"\n";
            cout<<"Designatio"<<emp[i].designation<<"\n";
            cout<<"EXP"<<emp[i].exp<<"\n";
            cout<<"age"<<emp[i].age<<"\n";
            break;
        }
    }
    showMenu();
}

void showMenu(){
    cout<<"Availabke options\n";
    cout<<"Build table   (1)\n";
    cout<<"Insert         (2)\n";
    cout<<"Delete entry   (3)\n";
    cout<<"Search recrd   (4)\n";
    cout<<"Exit           (5)\n";

    int option;
    cin>>option;
    if(option==1){
        build();
    }
    else if(option==2){
        insert();
    }
    else if(option==3){
        deleteRecord();
    }
    else if(option==4){
        searchRecord();
    }
    else{
        cout<<"Expected options";
        showMenu();
    }
}
int main(){
    showMenu();
    return 0;
}