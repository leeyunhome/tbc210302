// 9.13 포인터의 기본적인 사용 방법.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int a, b;
	
	a = 123;

	int* a_ptr;

	a_ptr = &a;

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	return 0;
}

