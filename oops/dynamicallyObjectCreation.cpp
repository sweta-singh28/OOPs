#include<iostream>
using namespace std;
class Animal{
    public:

    virtual void  speak(){
        cout<<"speaking"<<endl;
    }



};

class Dog:public Animal{
    public:

    //override
    void speak(){
        cout<<"Barking"<<endl;
    }

};



int main(){
    //dynamically
    // Animal* a = new Animal;
    // a->speak();  //it will print speaking


    //upcasting
    Animal* a = new Dog;
    a->speak();
    

    //downcasting
    Dog* b = (Dog* )new Animal();
    b->speak();

    return 0;
}