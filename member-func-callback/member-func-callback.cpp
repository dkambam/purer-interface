#include <iostream>

struct alu{
    int add(int a, int b){
        return a+b;
    }
};

int main(){
    int (alu::*callback)(int, int);         // definition
    callback = &alu::add;                   // assignment
    
    alu my_alu;
    int result = (my_alu.*callback)(2,3);   // call using object

    std::cout << result << std::endl;

    alu *alu_ptr = &my_alu;
    result = (alu_ptr->*callback)(4,8);       // call using pointer to object
    
    std::cout << result << std::endl;    

    return 0;
}