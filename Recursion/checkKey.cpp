#include<iostream>
using namespace std;

bool checkKey(string s, int n, int i, char key){
    //base case
    if(i>=n){
        return false;
    }

    //solve 1 case
    if(s[i] == key){
        return true;
    }

    //recursive call
    return checkKey(s, n, i+1, key);

}

int main(){
    string s = "swetsingh";
    char key = 'a';

    int i=0; 
    int n = s.length();

    

    if(checkKey(s, n, i, key)){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }

    return 0;
}