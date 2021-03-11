// chapter16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include "my_functions.h"
#include "my_structures.h"
#include "my_macros.h"	// path

extern int status;

int main()
{
#include "hello_world.h"

	printf("PI = %f\n", PI);

	printf("%p %d\n", &status, status);

	print_status();

	printf("%d\n", multiply(51, 2));

	printf("main()\n");
	printf("Static function address %p\n", multiply);
	printf("Static variable address %p\n", &si);

	print_address();

	patient_info james = { "James Bone", 45 }, michael = { "Michael Jobs", 50 };

	return 0;
}

