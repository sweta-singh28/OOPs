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

//i want to insert a node at the head of the Linked list
void insertAtHead(Node* &head, int data){
    //step 1: create a new node
    Node* newNode = new Node(data);
    //step 2: newnode->next = head pe point karwa do 
    newNode->next = head;
    //step 3: newNode ko head bana do
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
    insertAtHead(head, 60);
    insertAtHead(head, 70);

    print(head);





    return 0;
}