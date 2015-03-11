#include <iostream>
struct adder{
	int operator()(int a, int b){
		return a+b;
	}
	// state is not stored in this case.
};



int main(){
	adder callback; 			// definition 
	callback = adder(); 		// assignment
	int result = callback(5,3); // call

	std::cout << result << std::endl;
	return 0;
}