// 2d Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long tArray[2][4]{

	{1, 2, 3, 6	},
	{4, 7, 9, 10}
	
	};
	int value = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++)
			cout << tArray[i][j] << " ";
		cout << endl;
	}


    return 0;
}

