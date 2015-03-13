#include "animal.h"

int main(){
	Animal bolt = Animal("bolt", Actions("bolt", "Woof!", "I'm running.."));
	bolt.set_action(speak);

	return 0;
}