#include<iostream>
using namespace std;
void print(int arr[], int n, int i){
    //base case
    if(i >= n){
        return;
    }

    //print 
    //solve 1 case
    cout<<arr[i]<<" ";

    //recursive call
    print(arr, n, i+1);



}

int main(){
    int arr[] = {1,4,2,3,6};
    int n = 5;
    int i = 0;

    cout<<"Printing array"<<endl;

    print(arr, n, i);

    return 0;
}