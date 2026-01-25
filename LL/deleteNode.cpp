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

    //destructor to delete a node
    ~Node(){

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

void deleteNode(int position, Node* &head, Node* &tail){
    //LL is empty
    if(head == NULL){
        cout<<"Cannot delete cause, LL is empty"<<endl;
        return;
    }

    //want to delete the first node of the LL
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete (temp);
        return;

    }

    //want to delete the last node of the LL
    int len = findLength(head);
    if(position == len){
        //step 1: find prev
        int i = 1;
        Node* prev = head;
        while(i<position-1){
            prev = prev->next;
            i++;
        }

        //step 2: prev l next ko null krdo
        prev->next = NULL;
        //step 3: prev ko tail krdo
        Node* temp = tail;

        //step 4: delete temp (last node)
        delete (temp);
        return;
    }

    //want to delete middle node 
    //step 1: find prev nd curr
    int i = 1;
    Node* prev = head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    //step 2: prev k next ko curr k next pe point krdo
    prev->next = curr->next;
    //step 3: curr k next ko krdo null
    curr->next = NULL;
    delete (curr);
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

    // print(head);
    // cout<<endl;
    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;


    // insertAtPosition(6, 400, head, tail);
    // cout<<endl;
    
    // print(head);
    // cout<<endl;
    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;
     
     print(head);
    deleteNode(4, head, tail);
    
    cout<<endl;
    print(head);



    return 0;


}