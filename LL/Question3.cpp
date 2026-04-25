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
void insertAtHead(Node* &head, Node* &tail, int data){
    //step1: create a node
    Node* newNode = new Node(data);
    //step2: point newNode k next ko on head
    newNode->next = head;
    //check if LL is empty then the newNode will be first node
    if(head == NULL){
        tail = newNode;
    }
    //step3: point head on newNode
    head = newNode;

}

//insert at tail
void insertAtTail(Node* &head, Node* &tail, int data){
    //step 1: create a node
    Node* newNode = new Node(data);

    //check if LL is empty if yes then the newNode will be the first node
    if(tail == NULL){
        tail = newNode;
        head = newNode;
    }
    //LL is non empty
    else{
        //step 2:point tail k next on newNode
        tail->next = newNode;
    }
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
    Node* first =   NULL;
    Node* tail = NULL;

    insertAtHead(first, tail, 20);
    insertAtHead(first, tail, 30);
    
    insertAtTail(first, tail, 80);
    insertAtTail(first, tail, 100);
    

    cout<<"Linked List"<<endl;
    print(first);




    return 0;

}