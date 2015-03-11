
int simple(int i){
	std::cout << i << adds << std::endl;
}



int main(){
	amazing_adder adder;
	adder.set_stat_callback( &simple );


	int result;
	result = adder.add(2,3);
	result = adder.add(4,3);
	



	return 0;
}

