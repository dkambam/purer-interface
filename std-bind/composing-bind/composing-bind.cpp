#include <cstdio>
#include <iostream>
#include <functional>
#include <algorithm>

using std::placeholders::_1;

void compose( void );
int sub( int, int );


int main(){
	compose();
	return 0;
}



int sub(int a, int b){
	return a-b;
}

void compose( void ){
	int values[] = {10, 20, 5, 15, -4};

	std::for_each( values, values+5,
				   std::bind( printf, "%d ", std::bind( sub, _1, 7) ) ); // binds composed within another bind

	std::cout << std::endl;
}