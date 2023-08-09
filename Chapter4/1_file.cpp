#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string st = "Pabu Don";
    string st2;
    //opening file using constructor for writing
    ofstream out("sample.txt");
    out<<st;


    //Opening file using constructor for reading
    ifstream in("sample2.txt");
    //in>>st2;       //This only reads one word
    getline(in,st2); //This reads one line
    cout<<st2;
    return 0;
}