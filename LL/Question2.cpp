#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//insert at head
void insertAtHead(Node* &head, int data){
    //step1: create a node
    Node* newNode = new Node(data);
    //step2: point newNode k next ko on head
    newNode->next = head;
    //step3: point head on newNode
    head = newNode;

}

//insert at tail
void insertAtTail(Node* &tail, int data){
    //step 1: create a node
    Node* newNode = new Node(data);
    //step 2:point tail k next on newNode
    tail->next = newNode;
    //step 3: newNode is the tail
    tail = newNode;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){
    Node* first = new Node(10);
    Node* tail = first;

    insertAtHead(first, 20);
    insertAtHead(first, 30);
    
    insertAtTail(tail, 80);
    insertAtTail(tail, 100);
    

    cout<<"Linked List"<<endl;
    print(first);



    return 0;

}