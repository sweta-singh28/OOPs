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



void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}


Node* getMiddle(Node* &head){
    //LL is empty
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
        return head;
    }
    
    //LL has only 1 node
    if(head->next == NULL){
        return head;
    }


    //LL has more than 1 node
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && slow != NULL){
        fast = fast->next;
        //check if fast is not point to null then move 1 step forward (fast) 
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            while(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }

            return slow;
        }

    }


    return NULL;

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

    

   
   


    


    return 0;
}