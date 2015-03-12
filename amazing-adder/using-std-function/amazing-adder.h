#ifndef _AMAZING_ADDER_H_
#define _AMAZING_ADDER_H_

#include <iostream>
#include <functional> // necessary to use std::function

struct Amazing_adder{
private:
    typedef std::function< void(int) > callback_t;

public:
    int add(int a, int b);
    void set_stat_notify(callback_t);

private:
    int count_ = 0;
    callback_t stat_notify;
};


void simple(int);


struct Notify_functor{
    Notify_functor(std::string name): name_(name){}
    void operator()(int);
private:
    std::string name_;
};


#endif