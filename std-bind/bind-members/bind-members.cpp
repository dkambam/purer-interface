#include <iostream>
#include <functional>

using std::placeholders::_1;
using std::placeholders::_2;

struct Adder{
    int add(int, int);
private:
    int last_ = 0;
};

int Adder::add(int a, int b){
    last_ = (a + b);
    std::cout << "Adder::add: " << "(" << a << " + " << b << ")";
    std::cout << " = " << last_ << std::endl;
    return last_;
}

int main(){
    Adder my_adder;

    std::function< int(int, int) > f;
    f = std::bind( &Adder::add, my_adder, _1, _2 );  // understand this!

    f(29, 9);

    return 0;
}
