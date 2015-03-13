#include <iostream>
#include <functional>
#include "stateful-functor.h"


int main(){

	Sum my_sum;
	std::function< int(int) > sum1 = my_sum; // object copied 
	std::function< int(int) > sum2 = my_sum;

	int s1 = sum1(10);
	int s2 = sum2(20);

	std::cout << "after 1: " << s1 << std::endl; 	// o/p: 10
	std::cout << "after 2: " << s2 << std::endl;	// o/p: 20 (not 30!)
													// (because copy semantics)
	
	std::function< int(int) > sum3 = std::ref(my_sum); // new object referenced (no copy)
	int s3 = sum3(5);
	std::cout << "after 3: " << s3 << std::endl; 	// o/p: 5 (not 35!) 
													// because: reference to new object is passed

	std::function< int(int) > sum4 = std::ref(my_sum); // same object referenced
	int s4 = sum3(3);
	std::cout << "after 4: " << s4 << std::endl;	// o/p: 8

	return 0;
}