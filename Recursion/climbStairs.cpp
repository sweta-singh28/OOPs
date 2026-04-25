#include<iostream>
using namespace std;
int climbStairs(int n){
    //base case
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }

    //recursive call
    return climbStairs(n-1) + climbStairs(n-2);

}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int ans = climbStairs(n);
    cout<<"Answer is: "<<ans<<endl;



    return 0;
}