#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>&st, int target){
    //base case
    //stack is empty
    if(st.empty()){
        st.push(target);
        return;
    }
    if(st.top() >= target){
        st.push(target);
        return;
    }

    int topElement = st.top();
    st.pop();

    //recursive call
    insertSorted(st, target);

    //backtrack
    st.push(topElement);

}

void sortStack(stack<int>&st){
    //base case
    if(st.empty()){
        return;
    }

    int top = st.top();
    st.pop();

    //recursive call
    sortStack(st);

    //call insertSort function to insert the element in sorted order 
    insertSorted(st, top);



}

int main(){
    stack<int>st;
    st.push(10);
    st.push(100);
    st.push(40);
    st.push(60);
    st.push(80);
    st.push(00);

    sortStack(st);

    cout<<"Printing the sorted stack: "<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;



    return 0;
}