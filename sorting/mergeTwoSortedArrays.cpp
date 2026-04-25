#include<iostream>
using namespace std;

void merge(int* arr, int start, int end){
    int mid = start+(end-start)/2;

    //length of both the new created array
    int len1 = mid-start+1;
    int len2 = end-mid;

    //create two array left nd right dynamically
    int* left = new int[len1];
    int* right = new int[len2];


    //copy logic
    //copy values from main array to left array
    int k = start;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }


    //copy values from main array to right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    //merge logic
    //index of left, right nd main array
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;


    //now compare the elements of left nd right array nd move it to the main Array
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //logic for left over elements in left array
    while(leftIndex < len1){
        arr[mainArrayIndex] = left[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }

    //logic for left over elements in right array
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }

    //delete left nd right array
    delete[] left;
    delete[] right;


}

void mergeSort(int* arr, int start, int end){
    //base case
    //s == e----> single element
    //s > e----->invalid array

    if(start>=end){
        return;
    }

    int mid = start+(end-start)/2;

    //sort left part using recursion
    mergeSort(arr, start, mid);
    
    //sort right part using recursion
    mergeSort(arr, mid+1, end);

    //call merge function to merge both the sorted array
    merge(arr, start, end);


}

int main(){
    int arr[] = {4,5,13,2,12};
    int n = 5;

    int start = 0;
    int end = n-1;

    mergeSort(arr, start, end);

    cout<<"Printing the sorted array."<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}