// 16.9 pragma 지시자.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

/*
#pragma tokens (ex: once)
*/

//#pragma pack(1)
//_Pragma("pack(1)") // destringizing : remove and last ", \" -> "
//define PACK1 _Pragma("pack(1)")
//PACK1

//#pragma warning( disable : 4477 )
//#pragma warning( error : 4477 )

struct s {
	int i;
	char ch;
	double d;
};

int main()
{
	struct s A;
	printf("Size of A is : %d", sizeof(A));

	return 0;
}

