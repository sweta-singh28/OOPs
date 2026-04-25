#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&st, int target){
    //base case
    if(st.empty()){
        st.push(target);
        return;
    }
    if(st.top()>=target){
        st.push(target);
        return;
    }

    //solve 1 case
    int top = st.top();
    st.pop();

    //recursive call
    insertSorted(st, target);


    //BT
    st.push(top);
}

void sortStack(stack<int>&st){
    //base case
    if(st.empty()){
        return;
    }

    //solve 1 case
    int top = st.top();
    st.pop();

    //recursive call
    sortStack(st);

    //call insertSorted function to insert in sorted order 
    insertSorted(st, top);


}

int main(){
    stack<int>st;

    st.push(7);
    st.push(11);
    st.push(3);
    st.push(5);
    st.push(9);

    sortStack(st);

    cout<<"Printing sorted stack: "<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    


    return 0;
}