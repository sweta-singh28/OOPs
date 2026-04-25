#include<iostream>
#include<vector>
using namespace std;
void merge(int* arr, int s, int e, int n){
    //find mid
    int mid = s+(e-s)/2;

    //length of new create left array 
    int len1 = mid-s+1;
    //length of newly created right array
    int len2 = e-mid;

    //create two array left nd right of len1 nd len2
    int* left = new int[len1];
    int* right = new int[len2];


    //copy logic
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    //index for left, right nd main array
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;


     //now compare the elements of left nd right array nd move it to the main Array
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    //logic for leftover elements in left array
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }

     //logic for leftover elements in right array
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    //delete left nd right array
    delete[] left;
    delete[] right;

}

void mergeSort(int* arr, int s, int e, int n){
    //base case
    //s == e--->single element
    //s>e --->invalid array
    if(s>=e){
        return;
    }

    //break the array into 2
    int mid = s+(e-s)/2;

    //sort left part of the array
    mergeSort(arr, s, mid, n);
    
    //sort right part of the array
    mergeSort(arr, mid+1, e, n);

    //calling the merge() to merge both the arrays
    merge(arr, s, e, n);

}



int main(){
    int arr[] = {4,5,13,2,12};
    int n = 5;

    int s = 0;
    int e = n-1;

    mergeSort(arr, s, e, n);

    cout<<"printing the sorted array"<<endl;


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}