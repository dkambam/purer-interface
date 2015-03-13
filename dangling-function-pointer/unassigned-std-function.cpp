#include <iostream>
#include <functional>

int main(){

	std::function< void(std::string) > paint; // defined but not assigned
	paint("green"); // throws: bad_function_call

	return 0;
}