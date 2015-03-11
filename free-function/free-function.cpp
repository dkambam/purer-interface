/*
    Implementing callbacks for a free-function
    Using a function-pointer
*/
#include <iostream>

int sum(int a, int b); // returns the sum of a & b

int main(){
    

    int (*callback)(int, int);  // definition
    callback = &sum;            // assignment   
    int result = callback(2,3); // call


    std::cout << result << std::endl;
    return 0;
}

int sum(int a, int b){
    return a + b;
}