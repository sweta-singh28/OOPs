#include<iostream>
using namespace std;
class Animal{
    private:
    //this keyword represents this weight property 
    int weight;   //now weight is a private class we can access it using getters nd setters  


    public: 
    //state or properties 
    int age;
    string name;

    //constructor  //when you called an object the constructor is created by default
    //1. default constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout<<"Constructor called"<<endl;
    }

    //2. parameterised Constructor 
    Animal(int age){
        this->age = age;
        cout<<"Parametrised constructor is called "<<endl;
    }
    Animal(int age, int weight){
        this->age = age;
        this->weight= weight;
        cout<<"Parametrised constructor 2 is called "<<endl;
    }
      Animal(int age, int weight, string name){
        this->age = age;
        this->weight= weight;
        this->name = name;
        cout<<"Parametrised constructor 3 is called "<<endl;
    }

    //3. copy constructor impt here we are passing object in input parameters 
    Animal(Animal& obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"I am inside copy constructor"<<endl;
    }



    //behavior 
    void eat(){
        cout<<"Eating"<<endl;

    }
    void sleep(){
        cout<<"Sleeping"<<endl;

    }

    //getters---> to get weight
    int getWeight(){
        return weight;
    }
    //setters----> to set weight
    //here we can be confuse ki kon wale weight ki baat ho rhi, property weight jo class k ander defined h yaa fir function m jo parameter paas kr rhe uski so will use this key word jo ki ek pointer h or current ibject ko point kregi
    //now we can differentiate the class wali weight nd input parameter weight
    //using this de can differentiate the class k weight ko nd input parameter k weight ko 
    //this is a pointer to current object 
    void setWeight(int weight){
        this->weight = weight;
    }

    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->name<<" "<<endl;
    }

    
    ~Animal(){
        cout<<"I am inside destructor"<<endl;
    }


};



int main(){
    //create object---> two ways

    //static
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

    //when we want to access a private member we use getters nd setters 
    //accessing the private data weight using getters nd setters
    // ramesh.setWeight(101);
    // cout<<"weight: "<<ramesh.getWeight()<<endl;

    //constructor will be called for both static nd dynamic 



    //dynamic memory
    // Animal* suresh = new Animal;
    // //alternate
    // suresh->age = 19;
    // suresh->name = "Singh";

    // suresh->eat();
    // suresh->sleep();

    // Animal a(10);
    // Animal* b = new Animal(18, 27, "sweta");

    //object copy
    // Animal c = a;

    // Animal a;
    // a.age= 20;
    // a.setWeight(47);
    // a.name = "sweta";

    
    // Animal b = a;

    // a.print();
    // b.print();

    // a.name[0] = 'G';
    // a.print();



    //destructor
    //static
    cout<<"a obj creation"<<endl;
    Animal a;
    a.age = 5;


    //dynamic
    cout<<"b obj creation"<<endl;
    Animal* b = new Animal();
    b->age = 15;
    //manually
    delete b;




    return 0;
}