#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {19, 6 ,3 ,7 ,1 ,0 ,100};

    for(int i=0; i<arr.size()-1; i++){
        int minIndex = i;

        for(int j=i+1; j<arr.size()-1; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout<<"Printing sorted array: "<<endl;
    

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    return 0;
}