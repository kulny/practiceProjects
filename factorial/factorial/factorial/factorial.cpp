// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

unsigned long long factorial(unsigned long long n);

int main()
{
	std::cout << factorial(rand());
	std::cin.ignore();
	return 0;
}

unsigned long long factorial(unsigned long long n) {
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}