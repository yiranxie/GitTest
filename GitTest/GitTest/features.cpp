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

//Features2

int GetMax(int *input, int length)
{
	assert(input != NULL && length > 0);
	int max = input[0];
	for(int i = 1 ; i < length ; i ++)
	{
		if(input[i] > max)
			max = input[i];
	}
	return max;
}
//Features1
int GetMin(int *input, int length)
{
	assert(input != NULL && length > 0);
	int min = input[0];
	for(int i = 1 ; i < length ; i ++)
	{
		if(input[i] < min)
			min = input[i];
	}
	return min;
}
