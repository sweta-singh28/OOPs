#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1, 69, 2, 99, 6, 23, 56, 678};


    for(int i=1; i<arr.size(); i++){
        int temp = arr[i];

        int j = i-1;

        while(arr[j] > temp && j >= 0){
            //shifting 
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;


    }

    cout<<"Printing sorted array: "<<endl;

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    return 0;


}