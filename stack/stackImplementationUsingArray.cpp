#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int size; //size of array
    int* arr;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;

    }

    //functions
    //push()
    void push(int data){
        if(size-top > 1){
            //space available
            top++;
            arr[top] = data;
        }
        else{
            //space not available
            cout<<"Stack overflow."<<endl;
        }

    }

    //pop()
    void pop(){
        if(top == -1){
            //stack is empty
            cout<<"Stack Underflow, cannot delete element."<<endl;
        }
        else{
            //stack is not empty (move the top backward)
            top--;
        }

    }

    //top
    int getTop(){
        //stack empty
        if(top == -1){
            cout<<"Stack empty."<<endl;
        }
        else{
            //stack not empty, so return the arr current element
            return arr[top];
        }

    }

    //size()  return valid element 
    int getSize(){
        return top+1;

    }

    //empty
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }




};
int main(){
    //creation
    Stack s(10);

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    //printing
    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;

    s.push(1000);

    cout<<"The size of stack: "<<s.getSize()<<endl;



    


    return 0;
}