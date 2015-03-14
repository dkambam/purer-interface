#include <iostream>

int sub(int a, int b);

int main(){
    int x = 10;

    std::function< int(void) > f;
    f = std::bind( sub, 29, x );

    x = 20;
    f(); // o/p: (29 - 10) = 19

    f = std::bind( sub, 29, std::ref(x) ); // std::ref avoids copy
    f(); // o/p: (29 - 20) = 9

    return 0;
}

int sub(int a, int b){
    int result = a - b;
    std::cout << "sub: " << "(" << a << " - " << b << ")" ;
    std::cout << " = " << result << std::endl;
    return result;
}