//opposite of multiple
//here single parent multiple child classes
#include<iostream>
using namespace std;
class Car{
    public: 
    string color;
    int wheels;
    int weight;

    void speedUp(){
        cout<<"Speeding up"<<endl;
    }


};
//first child class 
class Scorpio:public Car{


};

//second child class
class XUV:public Car{

};

//third child class 
class Baleno:public Car{

};

int main(){
    //create object 
    Car obj;
    obj.color = "white";
    //insert
    obj.weight = 500;
    obj.wheels = 4;

    //access
    cout<<obj.weight<<endl;

    obj.speedUp();

    Scorpio S;
    XUV X;

    S.speedUp();




    return 0;
}