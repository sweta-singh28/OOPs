#include<iostream>
using namespace std;
void Count(int n){
    //base case
    if(n==0){
        return;
    }

    //recursive call
    Count(n-1);

    //print n;
    cout<<n<<" ";
}



int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    Count(n);


}