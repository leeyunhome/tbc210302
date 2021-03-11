// 10.13 포인터의 배열과 2차원 배열.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	/* Two of 1D arrays */

	//int arr0[3] = { 1, 2, 3 };
	//int arr1[3] = { 4, 5, 6 };

	//int* parr[2] = { arr0, arr1 };	// an array of pointers

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//	{
	//		printf("%d(==%d, %d) ", parr[j][i], *(parr[j] + i), /**(*(parr + j) + i)*/(*(parr + j))[i]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");

	/* 2D arrays are arrays of 1D arrays */

	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	int* parr0 = arr[0];
	int* parr1 = arr[1];

	for (int i = 0; i < 3; ++i)
		printf("%d ", parr0[i]);
	printf("\n");

	for (int i = 0; i < 3; ++i)
		printf("%d ", parr1[i]);
	printf("\n");*/

	/* arrays of pointers works like a 2D array */

	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	//int* parr[2] = {arr[0], arr[1]};
	int* parr[2];
	parr[0] = arr[0];
	parr[1] = arr[1];

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
		{
			printf("%d %d %d %d\n",
				arr[j][i], parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
		}
		printf("\n");
	}

	/*printf("%p\n", &parr[0]);
	printf("%p\n", parr[0]);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);*/

	/* Array of string of diverse lengths example */

	char* name[] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie" };

	const int n = sizeof(name) / sizeof(name[0]);

	for (int i = 0; i < n; ++i)
		printf("%s at %u\n", name[i], (unsigned)name[i]); // Use ull in x64 build
	printf("\n");

	char aname[][15] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie", "Jafar" };

	const int an = sizeof(aname) / sizeof(char[15]);

	for (int i = 0; i < n; ++i)
		printf("%s at %u\n", aname[i], (unsigned)& aname[i]); // Use ull in x64 build
	printf("\n");

	return 0;
}

