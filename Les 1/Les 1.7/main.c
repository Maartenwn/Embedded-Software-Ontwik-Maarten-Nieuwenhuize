#include "stdafx.h"


void getHightestInt(int *, int);

int main() {
	int numbers[] = { 1,2,3,4,5.2,7 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int worth = 0;
	int *i = &worth;
	getHightestInt(numbers, size, i);

	printf("Highest number = %d",worth);
	return 0;
}

void getHightestInt(int * integers, int sizeIntegers, int outcome) {
	int highest = integers[0];
	for (int i = 0; i < sizeIntegers; i++)
	{
		if (integers[i] > highest) {
			highest = integers[i];
		}
	}
	outcome = &highest;
	return;
}