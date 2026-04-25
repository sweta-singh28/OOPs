#include<iostream>
#include<stack>
using namespace std;
void insertAtButton(stack<int>&st, int &target){
    
    //base case
    if(st.empty()){
        st.push(target);
        return;
    }
   
    //solve 1 case
    int temp = st.top();
    st.pop();    

    //recursive call
    insertAtButton(st, target);


    //BT
    st.push(temp);
   

}

int main(){
    stack<int>st;

    st.push(5);
    st.push(15);
    st.push(27);
    st.push(32);
    st.push(11);

    int target = st.top();
    st.pop();

    insertAtButton(st, target);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    


    return 0;
}