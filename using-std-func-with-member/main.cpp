#include "animal.h"
#include <iostream>

typedef Animal<Dog> dog_t;
typedef Animal<Duck> duck_t;

int main(){
	dog_t bolt = dog_t( new Dog( std::string("Bolt") ) );
	
	bolt.act(); // no action as expected
	std::cout << "check 1" << std::endl;

	bolt.set_action( &Dog::bark );
	bolt.act();

	bolt.set_action( &Dog::howl );
	bolt.act();

	duck_t donald = duck_t( new Duck( std::string( "Donald the duck," ) ) );
	donald.set_action( &Duck::quack );
	donald.act();

	return 0;
}