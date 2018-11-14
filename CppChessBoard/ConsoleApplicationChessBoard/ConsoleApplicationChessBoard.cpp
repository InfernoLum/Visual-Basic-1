#include "pch.h"
#include <iostream>

int main()
{
	for ( int y = 0; y < 8; y++ )
	{
		for ( int x = 0; x < 8; x++ )
		{
			if ( y % 2 == 1 )
			{
				if ( ((y * 8) + x) % 2 == 1 )
				{
					std::cout << "|B";
				}
				else
				{
					std::cout << "|W";
				}
			}
			else
			{
				if ( ((y * 8) + x) % 2 == 1 )
				{
					std::cout << "|W";
				}
				else
				{
					std::cout << "|B";
				}
			}
		}

		std::cout << "|\n";
	}
}