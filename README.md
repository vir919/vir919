//01_배열.c
#include <stdio.h>
#include <stdlib.h>  //rand()
#include <time.h>    //time()
void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();
void exam10();

void main()
{
	exam10();
}

//배열과 for문 목적 : 배열의 인덱스 이동(0...9)
void exam1()
{
	int arr[10] = { 1 };

	for (int i = 0; i < 10; i++)	//0...9
	{
		printf("%2d", arr[i]);
	}
	printf("\n");
}
