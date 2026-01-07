#include<iostream>
using namespace std;
class Animal{
    public: 
    //state or properties 
    int age;
    string type;


    //behavior 
    void eat(){
        cout<<"Eating"<<endl;

    }
    void sleep(){
        cout<<"Sleeping"<<endl;

    }


};



int main(){
    //create object---> two ways

    //1. static
    // Animal ramesh;   // Animal type object nd its name is Ramesh 
    //insert 
    // ramesh.age = 18;
    // ramesh.name = "Lion";
    //want to access the property of an object use dot operator
    //want to access the age of ramesh 
    // cout<<"Age of ramesh: "<<ramesh.age<<endl;
    // cout<<"Name os ramesh: "<<ramesh.name<<endl;

    //calling the functions
    // ramesh.eat();
    // ramesh.sleep();



    //2. dynamic memory
    //created a animal type object using dynamic memory
    Animal* suresh = new Animal;
    //insert
    (*suresh).age = 15;
    (*suresh).type= "cat";

    //alternate
    suresh->age = 15;
    suresh->type = "dog";
    
    //calling function
    suresh->eat();
    suresh->sleep();



    return 0;
}