#include "amazing-adder.h"

int Amazing_adder::add(int a, int b){
    count_++;
    if( stat_notify ){ stat_notify(count_); }   // works even when not set!
                                                // no dangling pointer issues.
    return a+b;
}

void Amazing_adder::set_stat_notify(callback_t notify){
    stat_notify = notify;
}

void simple(int count){
    std::cout << "has " << count << " adds" << std::endl;
}

void Notify_functor::operator()(int count_){
    std::cout << name_ << " has " << count_ << " adds" << std::endl;
}
