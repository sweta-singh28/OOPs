#include<iostream>
#include<deque>
using namespace std;

int main(){
    //creation 
    deque<int>dq;

    //push
    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30); 

    //ans 10 5 20 30

    cout<<"Size: "<<dq.size();
    cout<<endl;

    //pop
    dq.pop_front();

    cout<<"Size: "<<dq.size();
    cout<<endl;

    dq.pop_back();

    cout<<"Size: "<<dq.size();
    cout<<endl;


    cout<<"Front: "<<dq.front()<<endl;
    cout<<endl;
    cout<<"Back: "<<dq.back()<<endl;



    //size
    if(dq.empty()){
        cout<<"Dequeue is empty."<<endl;
    }
    else{
        cout<<"Dequeue is not empty"<<endl;
    }





    return 0;
}