#include<iostream>
using namespace std;

//function overloading 
class Maths{
    public: 
    
    //sum function exist in multiple form(dont change in return type just change the parameters or variable)

    //same name function multiple times with different numbers of parameters 
    int sum(int a, int b){
        cout<<"I am the first signature"<<endl;
        return a+b;
    }

    int sum(int a, int b, int c){
        cout<<"Iam the second signature"<<endl;
        return a+b+c;
    }

    int sum(int a, float b){
        cout<<"I am the third signature"<<endl;
        return a+b+100;
    }


};

int main(){
    Maths obj;

    cout<<obj.sum(2,5.2f);
    return 0;
}