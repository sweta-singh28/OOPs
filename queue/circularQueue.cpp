#include<iostream>
#include<queue>
using namespace std;
class cirQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    cirQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data){
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
            //bring the first nd rear on 1st index then insert data
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
        //empty check
        if(front == -1){
            cout<<"Queue is empty, cannot pop."<<endl;
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
    cirQueue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.pop();

    while(!q.isEmpty()){
        cout<<q.arr[q.front]<<" ";
        q.pop();

    }

    return 0;
}