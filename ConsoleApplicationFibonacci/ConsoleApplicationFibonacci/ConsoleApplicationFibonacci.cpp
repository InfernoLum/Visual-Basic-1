#include "pch.h"
#include <iostream>

#define endl "\n"

int main()
{
	int arr[31] = { 0 };

	arr[0] = 0;
	std::cout << arr[0] << endl;
	arr[1] = 1;
	std::cout << arr[1] << endl;

	for ( int i = 1; i < 30; i++ )
	{
		arr[i + 1] = arr[i] + arr[i - 1];
		std::cout << arr[i+1] << endl;
	}
}
