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

//insert a node right at the first of the Linked List
void insertAtHead(Node* &head, int data){
    //step 1: create a new Node
    Node* newNode = new Node(data);
    //step 2: point newNode k next ko on head
    newNode->next = head;
    //step 3: point head at newNode
    head = newNode;
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
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);


    cout<<"Printing the LL: "<<endl;
    print(head);

    





    return 0;
}