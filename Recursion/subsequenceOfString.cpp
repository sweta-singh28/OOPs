#include<iostream>
#include<vector>
using namespace std;
void printSubsequence(string s, string ans, int i){
    //base 
    if(i>=s.length()){
        cout<<ans<<endl;
        return;
    }

    //exclude
    printSubsequence(s, ans, i+1);

    //include
    //first include that string in ans string
    ans.push_back(s[i]);
    //recursive call 
    printSubsequence(s, ans, i+1);


}

int main(){
    string s = "abc";
    string ans = "";

    int i=0; 

    printSubsequence(s, ans, i);





    return 0;
}