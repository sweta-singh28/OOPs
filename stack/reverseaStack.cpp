#include<iostream>
#include<stack>
using namespace std;

void insertAtButton(stack<int>&s, int target){
    //base case 
    if(s.empty()){
        s.push(target);
        return;
    }

    //solve 1 case 
    int topElement = s.top();
    s.pop();

    //recursive call
    insertAtButton(s, target);

    //backtrack
    s.push(topElement);

}

void reverseStack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }

    int top = s.top();
    s.pop();

    //recursion call 
    reverseStack(s);

    //call insertAtButton 
    insertAtButton(s, top);

}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    cout<<"Printing stack: "<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}