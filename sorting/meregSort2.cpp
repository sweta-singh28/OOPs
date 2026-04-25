#include<iostream>
#include<vector>
using namespace std;

void merge(int* arr, int s, int e){
    int mid = s+(e-s)/2;

    //length of both the newly created array
    int len1 = mid-s+1;
    int len2 = e-mid;

    //create two arrays left nd right of len1 nd len2 size
    int* left = new int[len1];
    int* right = new int[len2];

    //copy logic 
    //copy the main array element in newly created left array
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    
    //copy the main array elements in newly created right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    //comparision logic  (merge two sorted array)
    //create 3 index for left right nd main array
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    //compare the left element w right nd transfer it in main array
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    //transfer the remaining elements in left array
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    //transfer the remaining elements in right array
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    //delete the left nd right array
    delete[] left;
    delete[] right;


}

void mergeSort(int* arr, int s, int e, int n){
    //base case
    //s == e---->single element
    //s > e---->invalid array
    if(s>=e){
        return;
    }

    //break the array
    int mid = s+(e-s)/2;

    //sort the left part using recursion
    mergeSort(arr, s, mid, n);

    //sort the right part using recursion
    mergeSort(arr, mid+1, e, n);

    //calling merge function to merge both the sorted array
    merge(arr, s, e);


}

int main(){
    int arr[] = {10, 30, 4, 7, 99, 0, 1, -1};
    int n = 8;

    int s = 0;
    int e = n-1;

    mergeSort(arr, s, e, n);

    cout<<"Printing the sorted array: "<<endl;
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}