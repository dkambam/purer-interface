#include <iostream>

int sub(int a, int b);

int main(){

    std::function< int(int,int) > f;
    f = std::bind( sub, 29, 9 );

    int result;
    result = f(10,5);   // actual-args are ignored
                        // but does not throw an error! :)

    std::cout << "result: " << result << std::endl;

    return 0;
}

int sub(int a, int b){
    int result = a - b;
    std::cout << "sub: " << "(" << a << " - " << b << ")" ;
    std::cout << " = " << result << std::endl;
    return result;
}