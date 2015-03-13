#ifndef __STATEFUL_FUNCTOR_H__
#define __STATEFUL_FUNCTOR_H__

struct Sum{
	int operator()( int a );
	int value_ = 0;
};


#endif 