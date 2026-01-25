#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data  = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }


};

int len(Node* &head){
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
        head = newNode;
        tail = newNode;
    }
    else{
        //LL is non empty
        //step 1: create a new node
        Node* newNode = new Node(data);
        //step 2: newNode k next ko head pe point karo
        newNode->next = head;
        //step 3: head k prev ko newNode pe point kar
        head->prev = newNode;
        //step 4: newNode ko head kardo
        head = newNode;
    }
}




void print(Node* &head){
    Node*temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    Node* head = first;
    Node* tail = fourth;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;
    
    print(first);
    cout<<endl;

    insertAtHead(head, tail, 101);
    print(head);
    cout<<endl;






    return 0;
}