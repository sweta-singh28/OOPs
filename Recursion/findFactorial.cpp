#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n == 1){
        return 1;
    }

    //Recursive call
    return n * fact(n-1);

}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int ans = fact(n);
    cout<<"Answer is: "<<ans;


    return 0;
}