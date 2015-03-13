#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <functional>
#include <string>

/*
 Animals:
 	- Dog
 	- Duck

 Behaviors
 	- Dog: bark, growl, fetch.
 	- Duck: quack, swim.

 Requirements:
	- Animal of one type shall accept only it's behavior.
	- Animal behavior shall be modified at run-time.
*/

class Dog{
public:
	Dog(std::string name);
	void bark(void);
	void howl(void);
private:
	std::string name_;
};

class Duck{
public:
	Duck(std::string name);
	void quack(void);
	void swim(void);
private:
	std::string name_;
};

template <typename T>
class Animal{
private:
	typedef std::function< void(T*) > act_callback_t;
public:
	Animal(T *animal_type);
	void set_action(act_callback_t action);
	void act(void);
private:
	T *type_;
	act_callback_t action_;
};

#include "animal.cpp"

#endif