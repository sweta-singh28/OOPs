#include<iostream>
#include<stack>
using namespace std;
void getMiddle(stack<int> &st, int &totalSize){
    //edge case
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
        return;

    }


    //base case
    if(st.size() == totalSize/2+1){
        cout<<st.top()<<endl;
        return;
    }

    //solve 1 case
    int temp = st.top();
    st.pop();

    //recursive call
    getMiddle(st, totalSize);

    //BT
    st.push(temp);

}


int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    int totalSize = st.size();

    getMiddle(st, totalSize);

    return 0;
}