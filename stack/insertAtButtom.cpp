#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s, int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }

    //solve 1 case
    int topElement = s.top();
    s.pop();

    //recursion call
    solve(s, target);


    //backtrack
    s.push(topElement);
}

void  insertAtButton(stack<int>&s ){
    //check stack is empty or not
    if(s.empty()){
        cout<<"Stack is empty, cannot insert at button"<<endl;
        return;
    }

    int target = s.top();
    s.pop();

    solve(s, target);

}
int main(){
    stack<int>s;

    s.push(5);
    s.push(15);
    s.push(27);
    s.push(32);
    s.push(11);
    

    insertAtButton(s);

    cout<<"Printing the stack: "<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    





    return 0;
}