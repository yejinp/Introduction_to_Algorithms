#include <stdio.h>
#include <stdlib.h>

int max(int *array, size_t size)
{
	int i, maxium = array[0];
	for(i = 1; i < size; i++)
	{
		if(maxium < array[i])
			maxium = array[i];
	}
	return maxium;
}

int min(int *array, size_t size)
{
	int i, minium = array[0];
	for(i = 1; i < size; i++)
	{
		if(minium < array[i])
			minium = array[i];
	}
	return minium;
}
