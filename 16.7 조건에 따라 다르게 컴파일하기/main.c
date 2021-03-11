// 16.7 조건에 따라 다르게 컴파일하기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

#define LIMIT 400
//#undef LIMIT // It's ok to undefine previously NOT defined macro.

#undef NON_DEFINED

int main()
{
	printf("%d\n", LIMIT);

	return 0;
}

