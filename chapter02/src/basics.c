#include "basics.h"

int insert_sort(int *array, int b, int e)
{
	int i = 0, j, key;
	for(i = b; i < e; i++ )
	{
		key = array[i];
		j = i - 1;
		while (j > 0 && array[j] > key) 
		{
			array[j + 1] = array[j];
			j --;
		}
		array[j + 1] = key;
	}

	return 0;
}

