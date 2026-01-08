#include<iostream>
using namespace std;
class Fruits{
    public: 
    string name;



};

class Mango:public Fruits{
    public:
    int weight;



};

class Alphonso:public Mango{
    public: 
    int sugarLevel;
    



};


int main(){
    Alphonso a;
    a.weight = 1;
    a.name = "aam";
    a.sugarLevel = 120;


    cout<<a.weight<<endl;
    cout<<a.name<<endl;
    cout<<a.sugarLevel<<endl;

    return 0;
}