#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLen(Node* &head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        temp = temp->next;
        len++;
    }

    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    //check if LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    //LL is non empty
    else{
        //step 1: create a new node
        Node* newNode = new Node(data);
        //step 2:
        newNode->next = head;
        //step 3:
        head->prev = newNode;
        //step 4:
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    //LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //LL is non empty
        //step 1:
        Node* newNode = new Node(data);
        //step 2:
        tail->next = newNode;
        //step 3:
        tail = newNode;
    }
}



int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* tail = third;


    head->next = second;
    head->prev = NULL;

    second->next = third;
    second->prev = head;

    third->next = NULL;
    third->prev = second;


    print(head);

    insertAtHead(head, tail, 101);
    cout<<endl;

    print(head);

    insertAtTail(head, tail, 101);
    cout<<endl;

    print(head);




    return 0;
}