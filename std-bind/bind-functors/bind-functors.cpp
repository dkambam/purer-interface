#include <iostream>
#include <functional>

using std::placeholders::_1;
using std::placeholders::_2;

struct Add{
    int operator ()( int, int );
};


int main(){

    std::function< int(int, int) > f;
    f = std::bind( Add{}, _1, _2 ); // binding functor object
    
    f(10,5);

    return 0;
}

int Add::operator ()(int a, int b){
    int result = a + b;
    std::cout << "Add::add: " << "(" << a <<  " + " << b << ")" ;
    std::cout << " = " << result << std::endl;
    return result;
}