#include<iostream>
using namespace std;
class Dequeue{
    public:
    int* arr;
    int size;
    int front;
    int rear;


    Dequeue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data){
         //check if queue is full
        if(front == 0 && rear == size-1){
            cout<<"Queue is full, cannot push"<<endl;
            return;
        }
        else if(rear == (front - 1 + size) % size){
            cout<<"Queue is full, cannot push"<<endl;
            return;
        }

        //single element case-> first element
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

    void pushFront(int data){
        //check if queue is full
        if(front == -1 && rear == size-1){
            cout<<"Queue is full, cannot push"<<endl;
            return;
        }
        else if(rear == (front - 1 + size) % size){
            cout<<"Queue is full, cannot push"<<endl;
            return;
        }

        //single element case-> first element
        else if(front == -1){
            //bring the first nd rear on 1st index then insert data
            front = 0;
            rear = 0;
            arr[front] = data;
        }

        //circular nature
        else if(front == 0 && rear != size-1){
            front = size-1;
            arr[front] = data;
        }

        //normal flow
        else{
            front--;
            arr[front] = data;
        }
        
    }

    void popFront(){
        //empty check
        if(front == -1){
            cout<<"Queue is empty, cannot pop."<<endl;
            return;
        }

        //single element
        else if(front == rear){
            arr[front] = -1;
            //after popping the single element place nd front nd rear at start
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

    void popRear(){
        //1. check if queue is empty
        if(front == -1){
            cout<<"Queue is empty, Cannot pop."<<endl;
            return;
        }
        //2. only single element is present in queue
        else if(rear == front){
            //then move front nd rear to start
            front = -1;
            rear = -1;
        }
        //3. Circular nature 
        else if(rear == 0){
            rear = size-1;
        }
        else{
            rear--;
        }
    }



};


int main(){
    return 0;
}