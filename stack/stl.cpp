#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation
    stack<int>st;


    //insertion
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    //remove
    st.pop();


    //top element
    cout<<"Element at top is: "<<st.top()<<endl;

    //size
    cout<<"The size of stack is: "<<st.size()<<endl;


    //check empty
    if(st.empty()){
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Stack is not empty."<<endl;
    }




    return 0;
}