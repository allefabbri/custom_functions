// Copyright 2015, Alessandro Fabbri
// for any question, please mail rommacc@yahoo.it

/************************************************************************
* This program is free software: you can redistribute it and/or modify  *
* it under the terms of the GNU General Public License as published by  *
* the Free Software Foundation, either version 3 of the License, or     *
* (at your option) any later version.                                   *
*                                                                       *
* This program is distributed in the hope that it will be useful,       *
* but WITHOUT ANY WARRANTY; without even the implied warranty of        *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
* GNU General Public License for more details.                          *
*                                                                       *
* You should have received a copy of the GNU General Public License     *
* along with this program.  If not, see <http://www.gnu.org/licenses/>. *
************************************************************************/

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
