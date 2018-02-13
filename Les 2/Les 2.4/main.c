#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

struct Data {
	int maxRain;
	int dayOfMaxRain;
	int averageRain;
} Data;

void fillArray(int *array) {
	rand();
	for (size_t i = 0; i < 200; i++)
	{
		int random = ((double) rand() / RAND_MAX) * 300;
		array[i] = random;
	}
}

void printFirst20(int *array) {
	for (size_t i = 0; i < 20; i++)
	{
		printf("%d\n", array[i]);
	}
}

struct Data calculateData(int *array) {
	int maxRain = 0;
	int dayOfMaxRain = 0;
	int totalRain = 0;

	for (size_t i = 0; i < 200; i++)
	{
		if (array[i] > maxRain) {
			maxRain = array[i];
			dayOfMaxRain = i;
		}
		totalRain += array[i];
	}

	struct Data data;
	data.averageRain = totalRain / 200;
	data.dayOfMaxRain = dayOfMaxRain;
	data.maxRain = maxRain;
	return data;
}

void calculateDataWithParameter(int *array,struct Data *data) {
	int maxRain = 0;
	int dayOfMaxRain = 0;
	int totalRain = 0;

	for (size_t i = 0; i < 200; i++)
	{
		if (array[i] > maxRain) {
			maxRain = array[i];
			dayOfMaxRain = i;
		}
		totalRain += array[i];
	}
	data-> averageRain = totalRain / 200;
	data->dayOfMaxRain = dayOfMaxRain;
	data->maxRain = maxRain;	
}


void main() {
	int array[200];
	fillArray(&array);
	printFirst20(&array);
	calculateData(&array);
	struct Data data;
	calculateDataWithParameter(&array, &data);
	printf("");
}