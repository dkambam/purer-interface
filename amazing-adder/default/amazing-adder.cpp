#include <iostream>

void simple(int i){
	std::cout << i << " adds." << std::endl;
}

typedef struct Notify_functor{
	Notify_functor(): name_(""), defined_(false){}
	Notify_functor(std::string name): name_(name), defined_(true){}
	
	void operator()(int count){
		std::cout << name_ << " has " << count << " adds." << std::endl;
	}

	operator bool(){ return defined_; };

private:
	std::string name_;
	bool defined_;
} notify_functor;


class amazing_adder{
private:
	int count = 0;
	typedef notify_functor callback_t;
	callback_t stat_notify;

public:
	template <typename T>
	T add(T a, T b){
		T result = a + b;
		++count;
		if( stat_notify ){ stat_notify(count); }
		return result;
	}

	template <typename T>
	void set_stat_callback(T notify){
		stat_notify = notify;
	}
};

int main(){
	amazing_adder adder;
	// adder.set_stat_callback( &simple ); 

	int result;
	result = adder.add(2,3);
	result = adder.add(4,3);

	adder.set_stat_callback( notify_functor("foo") );
	result = adder.add(1,1);
	result = adder.add(2,6);

	return 0;
}

