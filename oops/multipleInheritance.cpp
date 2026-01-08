#include<iostream>
using namespace std;
class A{
    public: 
    int physics;


};

class B{
    public: 
    int chemistry;


};

class C:public A, public B{
    public:
    int maths;

};


int main(){
    
    C obj;
    cout<<obj.physics<<" "<<obj.maths<<" "<<obj.chemistry<<endl;


    return 0;
}