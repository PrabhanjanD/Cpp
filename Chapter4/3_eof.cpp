#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample.txt");
    out<<"This is me\n";
    out<<"This is also me";
    out.close();
    
    ifstream in;
    string st;
    in.open("sample.txt");
    //in>>st;
    //cout<<st;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }

    in.close();
    return 0;
}