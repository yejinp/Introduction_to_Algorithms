#include "basics.h"

void merge(int *array, int p, int q, int r)
{

}

void merge_sort(int *array, int p, int r)
{

}

static void exchange_a_value(int *array, int a, int b)
{
	if(a == b)
	{
		return ;
	}

	array[a] = array[a] ^ array[b];
	array[b] = array[a] ^ array[b];
	array[a] = array[a] ^ array[b];
}

int select_sort(int *array, int b, int e)
{
	int i = 0, j = 0, min, min_i;
	for(i = b; i < e; i++)
	{
		min = array[i];
		min_i = i;
		for(j = i + 1; j < e; j++)
		{
			if(min > array[j])
			{
				min = array[j];
				min_i = j;
			}
		}
		exchange_a_value(array, i, min_i);
	}
	return 0;
}

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

