#include <iostream>

int main(){

	void (*paint)(std::string); // function pointer
	paint("green"); // no compile error
					// runtime: seg fault

	return 0;
}