#include <iostream>
#include "features.h"

using namespace std;

int input[] = {1, 2, 3, 4};


int main()
{
	cout<<GetSum(input, sizeof(input) / sizeof(int))<<endl;
	
	//ver 2.0 feature1
	cout<<GetMin(input, sizeof(input) / sizeof(int))<<endl;
	return 0;
}