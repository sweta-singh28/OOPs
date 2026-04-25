#include<iostream>
using namespace std;
int powof2(int n){
    //base case
    if(n == 0){
        return 1;
    }

    //recursive call
    return 2 * powof2(n-1);
}

int main(){
    int n;
    cout<<"Enter power: "<<endl;
    cin>>n;

    cout<<"Answer: "<<powof2(n);
    return 0;
}