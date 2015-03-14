/*
DEMO: a simple exable for bind
*/

#include <iostream>
#include <functional>

int sub( int a, int b );

int main(){
	std::function< int() > f = std::bind( sub, 7, 2); // create functor using bind
	std::cout << f() << std::endl; // call functor
}

int sub( int a, int b ){
	return a-b;
}