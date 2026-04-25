#include<iostream>
#include<vector>
using namespace std;
bool searchKey(vector<int>&arr, int key, int start, int end, int n){
    //base case
    //1st
    if(start>end){
        return -1;
    }

    int mid = start+(end-start)/2;
    
    //solve 1 case
    if(arr[mid] == key){
        return true;
    }

    //recursive call for right
    if(arr[mid] < key){
        return searchKey(arr, key, mid+1, end, n);
    }


    //recursive call for left side 
    else{
        return searchKey(arr, key, start, mid-1, n);
    }

}

int main(){
    vector<int>arr{10, 20, 30,40, 50, 60, 70, 99};
    int key = 99;
    int start = 0;
    int end = arr.size()-1;
    int n = arr.size();

    if(searchKey(arr, key, start, end, n)){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }


    return 0;
}