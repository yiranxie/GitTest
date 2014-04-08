#include <iostream>
#include "features.h"


//Ver 1.0
int GetSum(int *input, int length)
{
	int sum = 0;
	for(int i = 0 ; i < length ; i ++)
	{
		sum += input[i];
	}
	return sum;
}