#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream hout("sample.txt");//connecting our file with pout stream
    //creating a name string
    string name;
    cout<<"Enter your name: ";
    cin>>name;


    hout<<"My name is"<<name;
    hout.close();

    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"The content of the file is "<<content;
    hin.close();
    return 0;
}