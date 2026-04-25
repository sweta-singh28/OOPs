#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;


    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;

    }

    void push1(int data){
        //space not available 
        if(top2 - top1 == 1){
            cout<<"Stack is full cant push"<<endl;
            return;
        }
        else{
            top1++;
            arr[top1] = data;
        }

    }

    void push2(int data){
        //space not available 
        if(top2 - top1 == 1){
            cout<<"Stack is full cant push"<<endl;
            return;
        }
        else{
            top2--;
            arr[top2] = data;
        }


    }

    void pop1(){
        if(top1 == -1){
            cout<<"Stack is empty, cant pop"<<endl;
            return;
        }
        else{
            arr[top1] = 0;
            top1--;
        }

    }

    void pop2(){
        if(top2 == size){
            cout<<"Stack is empty, cant pop"<<endl;
            return;
        }
        else{
            arr[top2] = 0;
            top2++;
        }

    }


};


int main(){
    Stack st(10);


    st.push1(10);
    st.push1(20);
    st.push1(30);

    st.push2(100);
    st.push2(90);
    st.push2(80);

    st.pop1();
    st.pop2();

   


    return 0;
}