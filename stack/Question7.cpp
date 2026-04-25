#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>arr;

    arr.push_back(4);
    arr.push_back(8);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(25);

    vector<int>ans(arr.size());
    stack<int>st;
    st.push(-1);

    for(int i=arr.size()-1; i>=0; i--){
        int curr = arr[i];
        while(curr <= st.top()){
            st.pop();
        }

        ans[i] = st.top();
        st.push(curr); 
            
    }

    cout<<"Printing ans: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;




   




    return 0;
}