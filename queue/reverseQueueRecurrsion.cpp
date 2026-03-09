#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q){
    //base case
    if(q.empty()){
        return;
    }

    //step A
    int element = q.front();
    q.pop();

    //step B: Recursion call
    reverseQueue(q);

    //step C: push the element in q
    q.push(element);

}


int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);


    reverseQueue(q);

    cout<<"Printing reversed Queue: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;


    return 0;
}