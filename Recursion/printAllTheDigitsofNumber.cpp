#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n == 0){
        return;
    }

    int newValueofN = n/10;
    //recursive call
    print(newValueofN);

    //solve 1 case
    int digit = n % 10;
    cout<<digit<<" ";
    

   

}

int main(){
    int n;
    cout<<"Enter: "<<endl;
    cin>>n;

    print(n);
    return 0;
}