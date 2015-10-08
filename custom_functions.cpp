#include <iostream>

class myint{
public:
	int value;
};

void doubler(int &);

void tripler(int *);

void plusone(myint *);

int main(){

	int num1 = 3;  // object to act on with my functions

	int *pint;     // pointer to object to be passed to my functions
	pint = &num1;

	myint num2;
	num2.value = 6;

	std::cout << "num1 = " << num1 << std::endl;

	doubler(num1);  // by reference
	std::cout << "AFTER doubler num1 = " << num1 << std::endl;
	
	doubler(*pint);  // by reference
	std::cout << "AFTER doubler num1 = " << num1 << std::endl;
	
	tripler(pint);  // by pointer
	std::cout << "AFTER tripler num1 = " << num1 << std::endl;
	
	tripler(&num1); // by another pointer
	std::cout << "AFTER tripler num1 = " << num1 << std::endl;
	
///////////////////////////////////	
	
	std::cout << "num2 = " << num2.value << std::endl;
	
	plusone(&num2);  // by struct pointer
	std::cout << "AFTER plusone num2 = " << num2.value << std::endl;

	return 0;
}

void doubler(int &num){   // function defined by reference
	num *= 2;               // feed it with the object 
}

void tripler(int *num){   // function defined by pointer
	*num *= 3;              // feed it with the pointer 
}                         // note: &object is considered a pointer

void plusone(myint *x){   // function defined by pointer to custom struct
	x->value += 1;					// 
}
