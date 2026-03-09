#include<iostream>
#include<queue>
using namespace std;
void interleaveQ(queue<int>&q){
    int count = 0;
    int n = q.size();
    int k = n/2;
    queue<int>q2;
    if(q.empty()){
        return;
    }

    //A. Separate both halves 
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count == k){
            break;
        }
    }

    //B. start interleaving 
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);
    }

    //if q is odd 
    if(n&1){
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);

    interleaveQ(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}