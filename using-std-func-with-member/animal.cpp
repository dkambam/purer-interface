#ifndef __ANIMAL_CPP__
#define __ANIMAL_CPP__

#include <iostream>

// Animal 
template <typename T>
Animal<T>::Animal(T *animal_type): type_(animal_type), action_(nullptr){}

template <typename T>
void Animal<T>::set_action(act_callback_t action){
	action_ = action;
}

template <typename T>
void Animal<T>::act(void){
	if(this->action_) (this->action_)(this->type_);
}

// Dog
Dog::Dog(std::string name): name_(name){}

void Dog::bark(void){
	std::cout << name_ << " says \"Woof!\"" << std::endl;
}

void Dog::howl(void){
	std::cout << name_ << " says \"Ahwooooooooo..\"" << std::endl;
}



// Duck
Duck::Duck(std::string name): name_(name){}

void Duck::quack(void){
	std::cout << name_ << " says \"Quack! Quack!\"" << std::endl;
}

void Duck::swim(void){
	std::cout << name_ << " says \"I'm swimming.\"" << std::endl;
}

#endif