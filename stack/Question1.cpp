#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data){
        //space not available 
        if(top == size-1){
            cout<<"Stack overflow."<<endl;
        }
        //space available 
        else{
            top++;
            arr[top] = data;
        }
    }

    void pop(){
        //stack is empty
        if(top == -1){
            cout<<"Cant pop, stack is empty"<<endl;
        }
        else{
            top--;
        }

    }

    int getTop(){
        if(top == -1){
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }

    int getSize(){
        return top+1;

    }




};

int main(){

    Stack st(100);
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();

    cout<<"Top is: "<<st.getTop()<<endl;

    cout<<"Size is: "<<st.getSize()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }




    return 0;
}