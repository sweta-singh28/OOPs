#include<iostream>
using namespace std;
class Queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;


    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = 0;
        rear = 0;
    }

    void push(int data){
        //queue is full
        if(rear == size){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }

    }

    void pop(){
        if(front == rear){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }

    }

    int getSize(){
        if(front == rear){
            return 0;
        }
        else{
            return rear - front;
        }

    }

    int getFront(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }

    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }

    }



};



int main(){

     Queue q(100);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"The size of queue is: "<<q.getSize()<<endl;

    q.pop();

    cout<<"The front element is "<<q.getFront()<<endl;

    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }





    return 0;
}