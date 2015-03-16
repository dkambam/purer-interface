
#include <iostream>
#include <functional>
#include <cstdio>

using std::placeholders::_1;
using std::placeholders::_2;

struct Add{
    int operator ()( int, int );
};


int main(){

    std::function< int(int, int) > f_int;
    std::function< double(int, int) > f_double;
    f_int = std::bind<int>( Add{}, _1, _2 ); // return type is int
    f_double = std::bind<double>( Add{}, _1, _2 ); // return type is int
    
    
	// std::cout << "result: " << f_int(10,5) << std::endl;
	// std::cout << "result: " << f_double(10,5) << std::endl;

    printf("%d\n", f_int(10, 5));
    printf("%f\n", f_double(10,5));


    return 0;
}

int Add::operator ()(int a, int b){
    int result = a + b;
    std::cout << "Add::add: " << "(" << a <<  " + " << b << ")" ;
    std::cout << " = " << result << std::endl;
    return result;
}