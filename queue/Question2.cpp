#include<iostream>
using namespace std;
class Queue{
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data){
        //queue is full
        if((front == 0 && rear == size-1) || (rear = front-1)){
            cout<<"Queue is full, cant push"<<endl;
            return;
        }

        //inserting first element
        else if(front == -1){
            front = 0;
            rear = 0;
            arr[rear] = data;
        }

        //circular nature
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }

        //normal flow
        else{
            rear++;
            arr[rear] = data;
        }

    }

    void pop(){
        //check empty
        if(front == -1){
            cout<<"Queue is empty, cant pop."<<endl;
            return;
        }

        //pop single element
        else if(front == rear){
            arr[front] = -1;
            //after popping, mark teh front nd rear again at -1
            front = -1;
            rear = -1;
        }

        //circular nature
        else if(front == size-1){
            front = 0;        
        }
        

        //normal flow
        else{
            front++;
        }

    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }

    }




};



int main(){
    return 0;
}