#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        //queue is full
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        //queue is empty
        if(front ==  rear){
            cout<<"Queue is empty, cant pop"<<endl;
        }
        else{
            //mark -1
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }

    }

    int getFront(){
        return arr[front];

    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }

    }

    int getSize(){
        //Queue is empty
        if(front == rear){
            return 0;
        }
        else{
            return rear - front;
        }
    }

    void printQueue(){
        if(isEmpty()){
            cout<<"Queue is empty."<<endl;
        }
        for(int i=front; i<rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
 

};


int main(){
    Queue q(10);

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



    //printing queue
    cout<<"Printing the queue"<<endl;
    q.printQueue();

    cout<<endl;

    


    return 0;
}