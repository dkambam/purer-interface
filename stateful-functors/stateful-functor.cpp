#include "stateful-functor.h"

int Sum::operator()( int a ){ return value_ += a; }