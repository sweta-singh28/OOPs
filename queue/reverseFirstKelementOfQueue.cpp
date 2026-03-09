#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseKelements(queue<int>&q, int k){
    stack<int>s;
    int n = q.size();
    int count = 0;

    //edge case
    if(k == n || k == 0){
        return;        
    }


    //step A: put k elements of queue in stack
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        count++;
        s.push(temp);

        if(count == k){
            break;
        }
    }

    //step B: push stack se q m wapas
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);    
    }

    //step C: n-k element pop kr k push kro 
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }


    }

}

int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    int k = 5;


    reverseKelements(q, k);

    cout<<"Printing: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;





    return 0;
}