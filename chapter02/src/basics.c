#include "basics.h"
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

static int g_L[MAX_A_SIZE] = {0};
static int g_R[MAX_A_SIZE] = {0};

void merge(int *array, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	int i = 0, j = 0, k;

	for(i = 0; i < n1; i++) {
		g_L[i] = array[p + i];
	}

	for(j = 0; j < n2; j++) {
		g_R[j] = array[q + j];
	}

	g_L[n1] = INT_MAX;
	g_R[n2] = INT_MAX;

	i = 0;
	j = 0;

	for(k = p; k < r; k++) {
		if(g_L[i] <= g_R[j]) {
			array[k] = g_L[i];
			i++;
		} else {
			array[k] = g_R[j];
			j++;
		}
	}
}

void merge_sort(int *array, int p, int r)
{
	int q;

	if( p < r) {
		q = (p + r) / 2;
		merge_sort(array, p ,q);
		merge_sort(array, q + 1, r);
		merge(array, p, q, r);
	}
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

