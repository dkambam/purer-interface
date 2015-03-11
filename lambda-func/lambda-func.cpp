#include <iostream>

typedef struct Dog{
    void set_says_callback( void (*says)(void) ){
        this->says = says;
    }
    
    void (*says)(void);
}dog_t;

int main(){

    dog_t bolt;
    bolt.set_says_callback( [](void){ std::cout << "Woof!" << std::endl; } ); // lambda
    bolt.says();

    bolt.set_says_callback( [](void){ std::cout << "Grrrrr.." << std::endl; } ); // lambda
    bolt.says();

    return 0;
}

