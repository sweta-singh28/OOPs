#include<iostream>
using namespace std;
class Animal{
    private:
    int weight;   //now weight is a private class we can access it using getters nd setters  


    public: 
    //state or properties 
    int age;
    string name;


    //behavior 
    void eat(){
        cout<<"Eating"<<endl;

    }
    void sleep(){
        cout<<"Sleeping"<<endl;

    }

    //getters
    int getWeight(){
        return weight;
    }
    //setters
    void setWeight(int w){
        weight = w;
    }


};



int main(){
    //create object---> two ways

    //static
    Animal ramesh;   // Animal type object nd its name is Ramesh 
    //insert 
    ramesh.age = 18;
    ramesh.name = "Lion";
    //want to access the property of an object use dot operator
    //want to access the age of ramesh 
    cout<<"Age of ramesh: "<<ramesh.age<<endl;
    cout<<"Name os ramesh: "<<ramesh.name<<endl;

    //calling the functions
    ramesh.eat();
    ramesh.sleep();

    //when we want to access a private member we use getters nd setters 
    //accessing the private data weight using getters nd setters
    ramesh.setWeight(101);
    cout<<"weight: "<<ramesh.getWeight()<<endl;



    //dynamic memory


    return 0;
}