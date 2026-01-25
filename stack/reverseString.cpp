#include<iostream>
#include<stack>
using namespace std;


int main(){
    string str = "swetasingh";

    stack<char>s;

    //transfer the character into stack
    for(int i=0; i<str.length(); i++){
        s.push(str[i]);
    }

    //print the stack 
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;

    return 0;
}