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

int getLen(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverseKNodes(Node* &head, int k){
    //edge cases 
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }

    int len = getLen(head);

    if(k > len){
        cout<<"Enter a valid value for k"<<endl;
        return head;
    }

    //it means k <= len
 
    //step A:
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    int count = 0;

    while(count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    //step B:
    if(forward != NULL){
        head->next = reverseKNodes(forward, k);
    }


    //step C:
    return prev;


}



   



int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    
    print(head);
    cout<<endl;


    head = reverseKNodes(head, 2);

    print(head);

   


    return 0;
}