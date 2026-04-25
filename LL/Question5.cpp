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

int findLength(Node* &head, Node* &tail){
    Node* temp = head;
    int count = 0;
    while(temp != 0){
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    //check if LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //LL is not empty
    else{
        //create a new Node
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;        
    }

}

void insertAtTail(Node* &head, Node* &tail, int data){
    //check if LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //LL is not empty
    else{
        //create a new Node
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }

}

void insertAtPosition(int position, int data, Node* &head, Node* &tail){
    //LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    
    //if want to insert at 1st position
    if(position == 0){
        insertAtHead(head, tail, data);
        return;
    }


    //want to insert at mentioned position 
    //LL is non empty
    //step 1: find the position curr nd prev
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    //step 2: create  a node
    Node* newNode = new Node(data);

    //step 3: point newNode k next on curr
    newNode->next = curr;

    //step 4: point prev next to newNode
    prev->next = newNode;



    //want to insert at last position
    int len = findLength(head, tail);
    if(position >= len){
        insertAtTail(head, tail, data);
        return;
    }


}

void deleteNode(int position, Node* &head, Node* &tail){
    //LL is empty
    if(head == NULL){
        cout<<"Cannot delete cause LL is empty. "<<endl;
        return;
    }

    //delete 1st node
    if(position == 0){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete (temp);
        return;
    }

    //delete last node
    int len = findLength(head, tail);
    if(position == len){
        //step 1: find prev
        Node* prev = head;
        int i=1;
        while(i<position-1){
            prev = prev->next;
            i++;
        }

        //step 2: prev->next = NULL
        prev->next = NULL;

        //STEP 3: point tail at prev
        Node* temp = tail;

        tail = prev;

        delete temp;
        return;
    }

    

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

    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);

    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);

    cout<<"Printing LL "<<endl;
    print(head);

    insertAtPosition(4, 101, head, tail);
    cout<<endl;

    cout<<"Printing LL "<<endl;
    print(head);

    deleteNode(1, head, tail);
    cout<<endl;

    cout<<"Printing LL "<<endl;
    print(head);

     




    return 0;
}