#include "stdafx.h"


int getHightestInt(int * , int);

int main() {
	int numbers[] = { 1,2,3,4,5.2,7 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	printf("Highest number = %d", getHightestInt(numbers, size));
	return 0;
}

int getHightestInt(int * integers, int sizeIntegers) {
	int highest = integers[0];
	for (int i = 0; i < sizeIntegers; i++)
	{
		if (integers[i] > highest) {
			highest = integers[i];
		}
	}
	return highest;
}