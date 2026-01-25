#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<char>st;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        //if ch is an opening bracket
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }

        //ch is a closing bracket
        else if(!st.empty()){
            char topCh = st.top();
            if(ch == ')' && topCh == '('){
                st.pop();
            }
            else if(ch == '}' && topCh == '{'){
                st.pop();
            }
            else if(ch == ']' && topCh == '['){
                st.pop();
            }
            //brackets is not matching 
            else{
                return false;
            }
        }
        //stack is empty
        else{
           return false;
        }
    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    string s = "()[]{}";
    
    if(isValid(s)){
        cout<<"The expression is valid."<<endl;
    }
    else{
        cout<<"Expression is invalid."<<endl;
    }




    return 0;
}