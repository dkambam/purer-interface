#include <iostream>
#include "amazing-adder.h"

int main(){
    Amazing_adder adder;

    std::cout << adder.add(2,3) << std::endl;   // no callback set. 
                                                // only prints 5

    adder.set_stat_notify( simple );            // set a function as callback
    std::cout << adder.add(5,2) << std::endl;

    adder.set_stat_notify(
            Notify_functor("Amazing_adder") );  // set a functor as callback
    std::cout << adder.add(5,2) << std::endl;

    return 0;
}


