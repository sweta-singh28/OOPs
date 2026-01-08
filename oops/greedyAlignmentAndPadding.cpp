#include<iostream>
using namespace std;
 
class Animal{
    int age;  //4 bytes
    int weight; //4 bytes
    char ch; //1byte
    


    //total should be 9 bytes but its 12 byte because of padding nd greedy alignment
//      1. Padding
//     Definition: Extra unused memory added by the compiler to align data members properly.

//     Why: To follow CPU memory alignment rules and make access faster.

//     Example:
// struct A {
//     char a;   // 1 byte
//     int b;    // 4 bytes
// };
// Memory layout: char (1 byte) + 3 bytes padding + int (4 bytes)

// Total size = 8 bytes instead of 5.





// 2. Greedy Alignment
// Definition: Compiler aligns data members using the largest data type's alignment requirement.

// Effect: Causes padding before and between members to maintain that alignment.

// Example:

// struct B {
//     char c;
//     double d;
// };
// double needs 8-byte alignment, so 7 bytes padding after char.



// Tip: Arrange members from largest to smallest to reduce padding.


};



int main(){
    //size of the class--- the size of empty class is 1 (if it will be 0 then we wont be able to identify) allocated minimum possible space
    cout<<"Size of empty class: "<<sizeof(Animal)<<endl;
    
    return 0;
}