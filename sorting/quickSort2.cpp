#include<iostream>
using namespace std;

int partition(int* arr, int s, int e){
    //choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //place the pivot element at its right position
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    //after this loop ill have the right position of the pivot element
    int rightIndex = s+count;

    swap(arr[pivotIndex], arr[rightIndex]);
    //update the pivotIndex
    pivotIndex = rightIndex;

    //now place smaller ele on left nd bigger on right
    int i = s; 
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(i < pivotIndex){
            i++;
        }

        while(j > pivotIndex){
            j--;
        }

        if(i < pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }


    }

    return pivotIndex;

}

void quickSort(int* arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //partition logic-->return the index of pivot element
    int p = partition(arr, s, e);

    //sort left part using recursion
    quickSort(arr, s, p-1);

    //sort right part using recursion
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