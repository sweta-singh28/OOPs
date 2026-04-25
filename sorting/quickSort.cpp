#include<iostream>
using namespace std;
int partition(int* arr, int s, int e){
    //step 1: choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //step 2: find right position for pivot element nd place it there 
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= arr[pivotIndex]){
            count++;
        }
    }

    //loop se bahar aane k baad ill have the right position of the pivot element
    int rightIndex = count+s;
    //now swap the pivot element with its correct position
    swap(arr[pivotIndex], arr[rightIndex]);
    //update pivotIndex
    pivotIndex = rightIndex;


    //step 3: check left side element should be smaller than pivotElement nd right side element should be bigger than the pivotElement
    int i = s;  
    int j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }

        while(arr[j] > pivotElement){
            j--;
        }



        //2 case
        //1--> you found the elements to swap
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        //2--> No need to swap, already left m sare elements chhote h nd right m bade h
    }

   

    return pivotIndex;

}


void quickSort(int* arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }


    //partition logic  
    //it will return the pivot index 
    int p = partition(arr, s, e);



    //recursion call to sort left side of the pivot element
    quickSort(arr, s, p-1);


    //recursion call to sort right side of the pivot element
    quickSort(arr, p+1, e);



}


int main(){
    int arr[] = {8, 1, 3, 4, 20, 50, 28, 4};
    int n = 8;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);


    cout<<"Printing array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}