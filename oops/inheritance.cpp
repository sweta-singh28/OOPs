#include<iostream>
using namespace std;
class Animal {
    public: 
    int age;
    int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

};

//inherited from animal(parent class) class 
class Dog:public Animal{

};

int main(){
    Dog d1;
    cout<<d1.age<<endl;
    d1.eat();
    d1.sleep();


    return 0; 
}