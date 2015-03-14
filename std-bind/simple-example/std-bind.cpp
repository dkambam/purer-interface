/*
DEMO: a simple exable for bind
*/

#include <iostream>
#include <functional>

using std::placeholders::_1;

int sub( int a, int b );

int main(){
	std::function< int() > f1;
	f1 = std::bind( sub, 7, 2); 	// bind both arguments (to objects)
	std::cout << f1() << std::endl; // call functor


	std::function< int(int) > f2;
	f2 = std::bind( sub, _1, 2 ); 		// bind 1st argument to placeholder
										// bind 2nd argument to integer (object)
	
	std::cout << f2(9) << std::endl;	// 9 is the first argument to sub



}

int sub( int a, int b ){
	int result = a-b;
	std::cout << "sub: (" << a << " - " << b << ") is " << result << std::endl;
	return result;
}