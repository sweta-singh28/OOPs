#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<3; i++){

        if(i == 0 || i == 2){
            //first row nd last row--> print 5 *
            for(int j=0; j<5; j++){
                cout<<"* ";
            }
        }
        else{
            //remaining middle rows 
            //first start
            cout<<"* ";
            //spaces
            for(int i=0; i<3; i++){
                cout<<" ";
            }
            //last star
            cout<<"* ";

        }
        
        
       cout<<endl;
    }



    return 0;
}