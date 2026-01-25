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

int findLength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

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

void insertAtPosition(int position, int data, Node* &head, Node* &tail){
    //check if LL is empty
    if(head == NULL){
        Node* newNode = new Node;
        head = newNode;
        tail = newNode;
        return;
    }
    
    //LL is not empty
    //want to insert at 1st position  (insertAtFirst)
    if(position == 0){
        insertAtHead(head, tail, data);
        return;
    }

    //length of LL
    int len = findLength(head);
  
    //want to insert at last position (insertAtLast)
    if(position >= len){
        insertAtTail(head, tail, data);
        return;

    }

    //insert at middle of the LL 
    //step 1: find the position: current nd prev
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    

    //step 2: create a node
    Node* newNode = new Node(data);

    //step 3: newNode k next ko current ko curr pe point krdo 
    newNode->next = curr;

    //step 4: prev k next ko newNode pe point krdo 
    prev->next = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
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
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;


    insertAtPosition(6, 400, head, tail);
    cout<<endl;
    
    print(head);
    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;



    return 0;


}