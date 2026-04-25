#include<iostream>
#include<vector>
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


bool isPalindrome(vector<int> &arr){
    int i = 0;
    int j = arr.size() - 1;

    while(i <= j){
        if(arr[i] != arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
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
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(90);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    vector<int>arr;

    Node* temp = head;

    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int i=0;
    int j = arr.size()-1;

   if(isPalindrome(arr)){
        cout<<"Palindrome";
    } 
    else {
        cout<<"Not Palindrome";
    }





    



    return 0;

}