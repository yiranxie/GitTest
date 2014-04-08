#include <iostream>
#include <assert.h>
#include "features.h"


//Ver 1.0
int GetSum(int *input, int length)
{
	assert(input != NULL && length > 0);
	int sum = 0;
	for(int i = 0 ; i < length ; i ++)
	{
		sum += input[i];
	}
	return sum;
}