#include <iostream>
#include <functional>
#include <exception>
void printMsg(std::string msg);

int main(){

	std::function< void(std::string) > paint; // defined but not assigned
	try{
		paint("red"); // throws: bad_function_call
	}catch(std::bad_function_call &e){
		std::cerr << e.what() << ": bad_function_call" << std::endl;
	}

	if(paint){	// test for validity
		paint("green");
	}

	return 0;
}

void printMsg(std::string msg){
	std::cout << msg << std::endl;
}