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

void insertAtHead(Node* &head, Node* &tail, int data){
    //check if LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        //head nd tail ko newNode pe point krdo cause ek hi node h bas
        head = newNode;
        tail = newNode;
        return;
    }

    //LL is non empty
    //step: 1 create a new node
    Node* newNode = new Node(data);
    //step: 2 newNode k next ko head pe point karo
    newNode->next = head;
    //step: 3 newNode ko head bana do
    head = newNode;

}

void insertAtTail(Node* &head, Node* &tail, int data){
    //check if LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        //head nd tail ko newNode pe point krdo cause ek hi node h bas
        head = newNode;
        tail = newNode;
        return;
    }

    //LL is non empty
    //step 1: create a new node
    Node* newNode = new Node(data);
    //step 2: tail k next ko newNode kardo
    tail->next = newNode;
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

Node* reverse(Node* &prev, Node*& curr){
    //base case
    if(curr == NULL){
        return prev;
    }

    //Solve 1 case
    Node* forward = curr->next;
    curr->next = prev;

    reverse(curr, forward);
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 70);

    insertAtTail(head, tail, 201);

    print(head);
    cout<<endl;

     Node* prev = NULL;
     Node* curr = head;

    head = reverse(prev, curr);
    

    cout<<"Reversed Linkedlist: "<<endl;
    print(head);
    cout<<endl;

    



    return 0;


}