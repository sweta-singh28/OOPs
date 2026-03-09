#include<iostream>
#include<queue>
using namespace std;
int main(){
    //creation 
    queue<int>q;

    //insertion
    q.push(5);
    q.push(19);
    q.push(5);
    q.push(8);
    q.push(5);

    //size
    cout<<"Size of queue: "<<q.size()<<endl;

    //pop()
    q.pop();

    cout<<"Size of queue is: "<<q.size()<<endl;

    //empty()
    if(q.empty()){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<"Queue is not empty!"<<endl;
    }

    cout<<"Printing the front of queue: "<<q.front();

    



    return 0;
}