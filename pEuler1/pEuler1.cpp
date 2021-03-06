//This program is meant to solve Project Euler Problem 1: Multiples of 3 and 5
//The problem is to sum the values of the natural numbers below 1000 that are multiples of 3 or 5
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i < 1000; ++i)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}

	cout << sum;

}
