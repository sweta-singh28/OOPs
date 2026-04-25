#include<iostream>
using namespace std;
int printSum(int n){

    //base case
    if(n == 1){
        return 1;
    }

    return n + printSum(n-1);
    
}


int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    cout<<"Answer is: "<<printSum(n);


    return 0;

}