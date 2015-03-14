/*
DEMO: swap arguments using bind
*/

#include <iostream>
#include <functional>

using std::placeholders::_1;
using std::placeholders::_2;

int sub( int a, int b );

int main(){
	std::function< int(int,int) > f;
	f = std::bind( sub, _2, _1 ); 		// bind 1st argument to 2nd placeholder
										// bind 2nd argument to 1st placeholder
	
	std::cout << f(11,9) << std::endl;	// 11 is the 2nd argument to sub
										// 9 is the 1st argument to sub



}

int sub( int a, int b ){
	int result = a-b;
	std::cout << "sub: (" << a << " - " << b << ") is " << result << std::endl;
	return result;
}