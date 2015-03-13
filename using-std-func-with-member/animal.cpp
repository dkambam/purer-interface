#include "animal.h"


void Pet::set_act( act_t act ){
	act_ = act;
}

void Pet::act( void ){
	act_
}



void Duck::quack( void ){
	std::cout << "Quack!" << std::endl;
}

void Duck::swim( void ){
	std::cout << "splash!" << std::endl;
}

void Dog::bark( void ){
	std::cout << "Woof!" << std::endl;
}

void Dog::growl( void ){
	std::cout << "Grrrr..!" << std::endl;
}