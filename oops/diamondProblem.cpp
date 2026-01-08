//impt

//scope resolution
#include<iostream>
using namespace std;
class A{
    public: 
    int chemistry;
    //create a constructor
    A(){
        chemistry = 410;
    }


};

class B{
    public: 
    int chemistry;

    B(){
        chemistry = 101;
    }


};

class C:public A, public B{
    public:
    int maths;

};


int main(){
    
    C obj;
                              //use of scope resolution 
    cout<<obj.maths<<" "<<obj.A::chemistry<<endl;


    return 0;
}