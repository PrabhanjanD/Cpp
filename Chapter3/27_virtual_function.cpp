#include <iostream>
#include <cstring>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title = s;
        rating = r;
    }
    virtual void display(){}
};

class CWHVideo: public CWH{
    float videolength;
    public:
    CWHVideo(string s,float r,float vl):CWH(s,r){
        videolength = vl;
    }
    void display(){
        cout<<"This is an amzing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is: "<<videolength<<"minutes"<<endl;
    }
};

class CWHText: public CWH{
    int words;
    public:
    CWHText(string s,float r,int wc):CWH(s,r){
        words = wc;
    }
    void display(){
        cout<<endl;
        cout<<"This is an amzing text tutorial with title "<<title<<endl;
        cout<<"Ratings of this text tutorial is "<<rating<<" out of 5 stars"<<endl;
        cout<<"No. of words in this tutorial is "<<words<<" words"<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;

    //for code with harry video
    title = "Django tutorial";
    vlen = 4.26;
    rating = 4.32;
    CWHVideo djvideo(title ,rating,vlen);
    djvideo.display();

    //for code with harry text
    title = "Django tutorial text";
    words = 42;
    rating = 4.11;
    CWHText djtext(title ,rating,vlen);
    djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
/*
Rules for virtual function
1.They cannot be static
2.They are accessed by object pointer
3.Virtual functions can be friend of another class
4.A virtual function in base class might not be used
5.If a virtual function is defined in the base class there is no neccessity of redifining in a
derived class
*/