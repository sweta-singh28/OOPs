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
//want to insert a at head
void insertAtHead(Node* &head, Node* &tail, int data){
    //step 1: create n new node
    Node* newNode = new Node(data);

    //step 2: newNode->next ko point karo head
    //check if LL is empty
    if(head == NULL){
        //LL is empty, first node ab add hogi
        tail = newNode;
    }
    newNode->next = head;
    //step 3: newNode ko head bana do
    head = newNode;

}

//i want to insert a node right at the end
void insertAtTail(Node* &tail, Node* &head, int data){
    //step 1: create n new Node
    Node* newNode = new Node(data);

    //step 2: tail-> next ko point kardo newNode pe
    //check if LL is empty
    if(tail == NULL){ //it means LL is empty
        //first node ab add hone wali h
        tail = newNode;
        head = newNode;

    }
    else{
        //LL is non empty
        tail->next = newNode;

    }

    //step 3: newNode ko tail kardo
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
    Node* head = new Node(10);
    Node* tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    insertAtTail(tail, head, 900);

    print(head);
    cout<<endl;




    return 0;
}