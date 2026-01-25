#include<iostream>
#include<stack>
using namespace std;

void printMiddleElement(stack<int>&s, int &totalSize){
    //edge case
    if(s.size() == 0){
        cout<<"Stack is empty, there is not element"<<endl;
    }

    //base case
    if(totalSize/2+1 == s.size()){
        cout<<"Middle Element is: "<<s.top()<<endl;
        return;
    }

    //solve 1 case
    int temp = s.top();
    s.pop();

    //recursion call
    printMiddleElement(s, totalSize);

    //backtrack
    s.push(temp);

}


int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalSize = s.size();

    printMiddleElement(s, totalSize);
   


    return 0;

}