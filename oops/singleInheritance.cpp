#include<iostream>
using namespace std;
class Car{

    private:
    int weight;

    public:
    string color;
    int tyre;
   

    //function/ behaviour/ methods
    void speedUp(){
        cout<<"Speeding"<<endl;
    }
    void Break(){
        cout<<"Break"<<endl;
    }

    //getters 
    int getWeight(){
        return weight;
    }
    //setters
    int setWeight(int w){
        weight = w;
    }
    

};

//child class 
class Scorpio:public Car{



};



int main(){

    Car swetaki;
    //insert
    swetaki.color = "black";
    swetaki.tyre = 4;

    //access
    cout<<swetaki.color<<endl;
    cout<<swetaki.tyre<<endl;

    //calling function
    swetaki.Break();
    swetaki.speedUp();


    swetaki.setWeight(48);
    cout<<"weight "<< swetaki.getWeight()<<endl;
    

    

    return 0;
}