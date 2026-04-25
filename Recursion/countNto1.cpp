#include<iostream>
using namespace std;
void Count(int n){
    //base case
    if(n==0){
        return;
    }

    //print n;
    cout<<n<<" ";

    //recursive call
    Count(n-1);
}



int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    Count(n);


}