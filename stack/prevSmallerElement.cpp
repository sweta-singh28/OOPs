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

    stack<int>st;
    st.push(-1);
    vector<int>ans(arr.size());

    for(int i=0; i<arr.size(); i++){
        int curr = arr[i];
        while(curr <= st.top()){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }

    //printing ans
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}