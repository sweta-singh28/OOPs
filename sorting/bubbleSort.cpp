#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {4,1,88,0,3,1,66,7,1234,-1};

    //for round 1 to n (rounds)
    for(int i = 1; i<arr.size(); i++){

        //for comparision    (arr.size() - i---> because after each round the the last element will be placed at its correct pos so we need to ignore the last element or n-1 element)
        for(int j = 0; j<arr.size()-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }


    cout<<"Printing the sorted array: "<<endl;
    for(int i=0; i<arr.size()-1; i++){
        cout<<arr[i]<<" ";

    }

    cout<<endl;
    return 0;
}