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

int len(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}

Node* reverse(Node* &prev, Node* &curr){
    //base case
    if(curr == NULL){
        return prev;
    }

    //solve 1 case rest recursion will take care
    Node* forward = curr->next;
    curr->next = prev;

    //recursive call
    return reverse(curr, forward);

}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    Node* prev = NULL;
    Node* curr = head;


    print(head);

    head = reverse(prev, curr);
    cout<<endl;


    cout<<"After reversing: "<<endl;

    print(head);




    


    return 0;
}