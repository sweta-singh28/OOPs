#include<iostream>
using namespace std;
int fib(int n){
    //base case
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

    //recursive relation
    return fib(n-1) + fib(n-2);

}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int ans = fib(n);
    cout<<"Answer: "<<ans<<endl;

    return 0;
}