#include<iostream>
#include<stack>
using namespace std;
bool isRedundant(string& s){
    stack<char>st;

   for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // push opening bracket and operators
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if (ch == ')') {
            bool hasOperator = false;

            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    hasOperator = true;

                st.pop();
            }

            // pop '('
            st.pop();

            // no operator → redundant
            if (!hasOperator)
                return true;
        }
    }
    return false;

}

int main(){
    string s = "((a+b))";

    if (isRedundant(s))
        cout << "Redundant brackets present";
    else
        cout << "No redundant brackets";
    


    return 0;
}